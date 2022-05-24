using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using IntegratedAuthoringTool;
using IntegratedAuthoringTool.DTOs;
using ActionLibrary;
using GAIPS.Rage;
using WellFormedNames;
using WorldModel;
using RolePlayCharacter;
using UnityEngine.Events;
using UnityEngine.UI;
using UnityEngine.Networking;
using System.Linq;
using System.IO;
using Assets.Scripts;
using Microsoft.MixedReality.Toolkit.UI;
using Microsoft.MixedReality.Toolkit.Utilities;
using System;
using UnityEngine.SceneManagement;

public class FAtiMAWebServerScenarioManager : MonoBehaviour
{

    // Scenario Info
    [HideInInspector]
    public string _scenarioName = "";
    [HideInInspector] public List<string> _characters;
    [HideInInspector] public List<string> _dialogues;
    [HideInInspector] public string playerChar;
    [HideInInspector] public string npcChar;

    Dictionary<string, List<DialogueStateActionDTO>> characterToDecisions;

    [Header("Prefabs")]
    public GameObject DialogueButtonPrefab;
    public Transform dialogueContent;

    private UnityBodyImplement _npcController;
    private List<Interactable> _mButtonList = new List<Interactable>();


    [Header("Audio")]
    //Dealing with Audio and XML relevant for Web-GL
    UnityWebRequest audio;
    UnityWebRequest xml;
    string initiator;
    bool audioReady = false;
    bool xmlReady = false;
    bool audioNeeded = false;

    //Time given to each character's dialogue in case there is no text to speech
    public float dialogueTimer;

    // If there is no text to speech leave at false
    public bool useTextToSpeech;

    // If agents need to get to know each other
    public bool introduceAgents;

    public TMPro.TextMeshProUGUI debugText;
    public TMPro.TextMeshProUGUI dialogueText;

    private GameObject npc;

    private WebRequester WebRequester;
    private SpawnerScript Spawner;

    // Progression Booleans
    bool _scenarioLoaded = false;
    bool _charactersLoaded = false;
    bool startedScenario = false;
    public float emotionIntensity = 0.0f;
    public string strongestEmotion = "";
    [HideInInspector] public bool startScenario;
    [HideInInspector] public string VoiceType;

    private string actionInitiator;
    public bool usingDebugger;

    void Awake()
    {
        WebRequester = this.GetComponent<WebRequester>();
        Spawner = this.GetComponent<SpawnerScript>();
        _characters = new List<string>();
        characterToDecisions = new Dictionary<string, List<DialogueStateActionDTO>>();
    }

    public void StartScenario()
    {
        //Start by Resetting the Scenario
        if (_scenarioName == "")
        {
            if (npc == null)
                Spawner.SpawnCharacter();
            WebRequester.GetScenarios();
            startedScenario = true;
        }
        else
        {
            RestartScenario();
        }
    }
    public void RestartScene()
    {
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }

    public void RestartScenario()
    {
        ClearAllDialogButtons();
        dialogueText.text = "";
        WebRequester.ResetScenario(_scenarioName);
    }

    public void ResetedScenario()
    {
        //Assuming the NPC starts the conversation but it can be irrelevant
        Debug.Log("Reseted Scenario");
        WebRequester.GetDecisions(_scenarioName, npcChar);
    }

    void FixedUpdate()
    {
        if (Input.GetKeyDown(KeyCode.R))
            RestartScenario();


        if (!startedScenario) return;

        if (npc == null) return;

        if (_npcController._speechController.IsPlaying)
            return;

        if (audioNeeded)
        {

            if (audioReady && xmlReady)
                StartCoroutine(PlayAudio());
            else return;
        }

        UpdateEmotionalState();


    
    }



    void HandlePlayerOptions(List<DialogueStateActionDTO> playerDialogs)
    {
        AddDialogueButtons(playerDialogs, this.npcChar);
    }

   
    public void SpawnedNPC()
    {
        npc = GameObject.FindGameObjectWithTag("NPC");
        _npcController = npc.GetComponentInChildren<UnityBodyImplement>();
    }


   
  
    void AddDialogueButtons(List<DialogueStateActionDTO> dialogs, string target)
    {

        var i = 0;

       
        foreach (var d in dialogs)
        {
            var buttonGameObject = Instantiate(DialogueButtonPrefab);

            var buttonTransform = buttonGameObject.transform;

            buttonTransform.SetParent(dialogueContent, false);

            i++;

            buttonGameObject.GetComponentInChildren<ButtonConfigHelper>().MainLabelText = i + ": " + d.Utterance;

            var id = d.Id;

            var interactable = buttonGameObject.GetComponentInChildren<Interactable>();

            interactable.OnClick.AddListener(() => Reply(Name.BuildName(playerChar), Name.BuildName(npcChar), d));

            _mButtonList.Add(interactable);

        }

        dialogueContent.GetComponent<GridObjectCollection>().UpdateCollection();


    }

    void ClearAllDialogButtons()
    {
        foreach (var b in _mButtonList)
        {
            Destroy(b.gameObject);
        }
        _mButtonList.Clear();
    }

  
    void Reply(Name initiator, Name target, DialogueStateActionDTO dialog)

    {
        var utterance = dialog.Utterance;
        var meaning = dialog.Meaning;
        var style = dialog.Style;
        var nextState = dialog.NextState;
        var currentState = dialog.CurrentState;

        // Playing the audio of the dialogue line

        if (useTextToSpeech)
        {
           this.StartCoroutine(Speak(dialog, initiator, target));
        }

        //Writing the dialog on the canvas
        Debug.Log(
            initiator + " says:  '" + utterance + "' ->towards " + target);
        this.dialogueText.text = initiator + " says:  '" + utterance + "' ->towards " + target;

        actionInitiator = initiator.ToString();
        // Getting the full action Name
        var actualActionName = "Speak(" + currentState + ", " + nextState + ", " + meaning +
                               ", " + style + ")";


        //So we can generate its event
        var eventName = EventHelper.ActionEnd(initiator, (Name)actualActionName, target);

        string[] events = new string[1];
        events[0] = eventName.ToString();

        // Handle Effects

        if (initiator.ToString() == playerChar)
            ClearAllDialogButtons();

        WebRequester.PostEvents(_scenarioName, target.ToString(), events);

    }

    public void WorldChanged(string initiator)
    {
        characterToDecisions[npcChar] = null;
        characterToDecisions[playerChar] = null;

        WebRequester.GetEmotionalState(_scenarioName, npcChar);
       
    }

  

    // Method to play the audio file of the specific dialogue, aka what makes the agent talk
    private IEnumerator Speak(DialogueStateActionDTO dialog, Name initiator, Name target)
    {

        // The player has no body, as a consequence there is no reason for him to speak
        if (playerChar == initiator.ToString())
            yield break;


        audioNeeded = true;
        xmlReady = false;
        audioReady = false;
        this.initiator = initiator.ToString();
        // What is the type of of Voice of the agent
        var voiceType = this.VoiceType;

        // Each utterance has a unique Id so we can retrieve its audio file
        var utteranceID = dialog.UtteranceId;

        // This path can be changed, for now it is the path we used in this project
        var textToSpeechPath = "/SingleCharacter/TTS/" + voiceType + "/" + utteranceID;

        var absolutePath = Application.streamingAssetsPath;

#if UNITY_EDITOR || UNITY_STANDALONE
        absolutePath = "file://" + absolutePath;
#endif
        // System tries to "download" the .wav file along with its xml configuration
        string audioUrl = absolutePath + textToSpeechPath + ".wav";
        Debug.Log("Audio Path: " + audioUrl);
        string xmlUrl = absolutePath + textToSpeechPath + ".xml";
        Debug.Log("XML Path: " + xmlUrl);

        StartCoroutine(GetXML(xmlUrl));
        StartCoroutine(GetAudioURL(audioUrl));

    }


    #region Web Server Connection

    public void SetScenarioName(string s)
    {
        Debug.Log("Scenario Name:" + s);
        this._scenarioName = s;
        _scenarioLoaded = true;
        WebRequester.GetAllCharacters(_scenarioName);

    }

    public void SetCharacters(List<string> characters)
    {
        this._characters = characters;

       
        foreach (var c in _characters)
            Debug.Log(c);

        if(this._characters.Count > 0)
            this._charactersLoaded = true;

        if(_characters.Count > 1)
        {
            characterToDecisions[npcChar] = new List<DialogueStateActionDTO>();
            playerChar = _characters.Find(x=>x.Contains("Player"));
            npcChar = _characters.Find(x => x != playerChar);
            characterToDecisions[playerChar] = new List<DialogueStateActionDTO>();
        }

        WebRequester.GetDecisions(_scenarioName, npcChar);

    }

    public void DecisionHandler(List<string> _decisions, string initiator)
    {
        if (_decisions.Count() < 1)
        {
           if(usingDebugger) debugText.text += "No decision found";
            characterToDecisions[initiator] = new List<DialogueStateActionDTO>();

            if (initiator == npcChar && characterToDecisions[playerChar] == null)
                WebRequester.GetDecisions(_scenarioName, playerChar);
            else 
                if(characterToDecisions[npcChar] == null)
                    WebRequester.GetDecisions(_scenarioName, npcChar);
            

            if ((characterToDecisions[playerChar] != null && characterToDecisions[playerChar].Count == 0) && (characterToDecisions[npcChar] != null && characterToDecisions[npcChar].Count() == 0))
                dialogueText.text = "Scenario over. \n Please Start Scenario with Right Palm";

            return;
        }

        var decisions = _decisions;

        List<DialogueStateActionDTO> actions = new List<DialogueStateActionDTO>();
        List<string> targets = new List<string>();
        var actionName = "";
        var targetName = "";
        var utterance = "";
        var id = "";

        foreach (var act in decisions)
        {
            if (act.Contains("Speak"))
            {
                // Deal with SPEAK Actions

                actionName = Between(act, "Action:", ",Target:");

                targetName = Between(act, "Target:", ",Utterance:");
                utterance = Between(act, "Utterance:", ",Utility:");
                id = Between(act, "ID:", "");

                Debug.Log(" Name:" + actionName + "|Target: " + targetName + "|Utterance: " + utterance + "|Guid:" + id);

                actions.Add(GetDialogAction(actionName, utterance, id));
                targets.Add(targetName);
            }

        }

        if (initiator == npcChar)
        {
            this.Reply(Name.BuildName(npcChar), Name.BuildName(playerChar), actions[0]);
        }
        else
            HandlePlayerOptions(actions);
    }


    public string Between(string STR, string FirstString, string LastString)
    {
        string FinalString;
        int Pos1 = STR.IndexOf(FirstString) + FirstString.Length;

        var Pos2 = 0;
        if(LastString == "")
        {
            return STR.Substring(Pos1);
        }
        else
        {
            Pos2 = STR.IndexOf(LastString);
        }
       
        FinalString = STR.Substring(Pos1, Pos2 - Pos1);
        return FinalString;
    }


    // *Deserializing*
    public DialogueStateActionDTO GetDialogAction(string action, string utterance, string utteranceID)
    {
        var meaning = "";
        var style = "";
        var nextState = "";
        var currentState = "";

        // Speak(Start,Greeting,-,Rude)

        var result = Between(action, "Speak(", ")");
        
        var parameters = result.Split(',');

        currentState = parameters[0];
        nextState = parameters[1];
        meaning = parameters[2];
        style = parameters[3];

        DialogueStateActionDTO ret = new DialogueStateActionDTO()
        {
            CurrentState = currentState,
            NextState = nextState,
            Meaning = meaning,
            Style = style,
            UtteranceId = utteranceID,
            Utterance = utterance,
        };


        return ret;

    }

    public void UpdateEmotionalState()
    {

        if (strongestEmotion == "[]" || this.emotionIntensity < 0.2f || strongestEmotion == "")
            return;

        npc.GetComponentInChildren<UnityBodyImplement>().SetExpression(this.strongestEmotion, this.emotionIntensity);
        if(this.emotionIntensity > 0)
            this.emotionIntensity -= 0.002f;
    }

    public void UpdatedEmotionalState()
    {
        if (actionInitiator == npcChar)
            WebRequester.GetDecisions(this._scenarioName, playerChar);
        else
        {
            WebRequester.GetDecisions(this._scenarioName, npcChar);
        }
    }

    #endregion

    #region AudioHandlers
    IEnumerator GetAudioURL(string path)
    {
      if(usingDebugger)
            debugText.text += "Getting Audio URL";
        audio = UnityWebRequestMultimedia.GetAudioClip(path, AudioType.WAV);

        yield return audio.SendWebRequest();

        if (audio.result != UnityWebRequest.Result.Success)
        {

            if (audio.result == UnityWebRequest.Result.DataProcessingError || audio.result == UnityWebRequest.Result.ConnectionError || audio.result == UnityWebRequest.Result.ProtocolError)
            {
                if (usingDebugger) debugText.text += "Audio not found error: " + audio.error;
                Debug.Log("Audio not found error: " + audio.error);
                audioReady = true;
                useTextToSpeech = false;
                yield return null;
            }
        }
        else
        {

            audioReady = true;
        }

    }

    IEnumerator GetXML(string path)
    {
        if (usingDebugger) debugText.text = "Getting XML";
        UnityEngine.Networking.UnityWebRequest www = UnityEngine.Networking.UnityWebRequest.Get(path);

        yield return www.SendWebRequest();

        if (www.result != UnityWebRequest.Result.Success)
        {
            if (www.result == UnityWebRequest.Result.DataProcessingError || www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                if (usingDebugger) debugText.text = "XML not found error " + www.error;
                Debug.Log("XML not found error: " + www.error);
                xmlReady = true;
                useTextToSpeech = false;
                yield return null;
            }

        }
        else
        {
            xml = www;
            xmlReady = true;


        }

    }
    private IEnumerator PlayAudio()
    {

        if (useTextToSpeech)
        {
            var clip = DownloadHandlerAudioClip.GetContent(audio);
            // The Unity Body Implement script allows us to play sound clips
            var initiatorBodyController = _npcController;

            Debug.Log("initiator:" + initiator.ToString());

            yield return initiatorBodyController.PlaySpeech(clip, xml.downloadHandler.text);

            clip.UnloadAudioData();
            audioNeeded = false;
        }

        else audioNeeded = false;

    }
    #endregion


  

}
