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

public class FAtiMAScenarioManager : MonoBehaviour
{

    // Store the iat file
    private IntegratedAuthoringToolAsset _iat;
    private AssetStorage _storage;

    public string _iatName;
    public string _storageName;


    //Store the characters
    private List<RolePlayCharacterAsset> _rpcList;
   
    //Store the World Model
    private WorldModelAsset _worldModel;

    [Header("Prefabs")]
    public GameObject DialogueButtonPrefab;
    public Transform dialogueContent;

    [Header("NPC")]
    private RolePlayCharacterAsset _playerRpc;
    private RolePlayCharacterAsset _npcRpc;
    private UnityBodyImplement _npcController;

    private bool _waitingForPlayer = false;

    private List<Interactable> _mButtonList = new List<Interactable>();


    [Header("Audio")]
    //Dealing with Audio and XML relevant for Web-GL
    UnityWebRequest audio;
    UnityWebRequest xml;
    string initiator;
    bool audioReady = false;
    bool xmlReady = false;
    bool audioNeeded = false;


    // Auxiliary Variables
    private bool initialized = false;
    private bool newDecision = true;

    //Time given to each character's dialogue in case there is no text to speech
    public float dialogueTimer;
    //Auxiliary variable
    private float dialogueTimerAux;

    // If there is no text to speech leave at false
    public bool useTextToSpeech;
    public bool useBackupTextToSpeech;

    // If agents need to get to know each other
    public bool introduceAgents;

    public TMPro.TextMeshProUGUI debugText;

    private bool nervous = false;

    private GameObject npc;

    private string scenarioString = "";
    private string storageString = "";

    public bool loadThroughString;
    public bool loadThroughFiles;

    public TTSHandler backupTTS;


    public void UpdateNPC()
    {

        if (npc != null)
        {
            var anim = npc.GetComponentInChildren<Animator>();
            nervous = !nervous;
            anim.SetBool("Nervous", nervous);
        }
      
    }

    void FixedUpdate()
    {

        if (!initialized) return;

        IAction finalDecision = null;
        string initiatorAgent = "";

        if (_npcController._speechController.IsPlaying)
            return;

        if (audioNeeded)
        {

            if (audioReady && xmlReady)
                StartCoroutine(PlayAudio());
            else return;
        }


        if (_waitingForPlayer)
            return;



        if (newDecision)
        foreach (var rpc in _rpcList)
        {

            // From all the decisions the rpc wants to perform we want the first one (as it is ordered by priority)
            var decision = rpc.Decide().FirstOrDefault();



            if (_playerRpc.CharacterName == rpc.CharacterName)
            {
                HandlePlayerOptions(decision);
                continue; ;

            }

            if (decision != null)
            {

                initiatorAgent = rpc.CharacterName.ToString();
                finalDecision = decision;


                //Write the decision on the canvas
                debugText.text +=
                    " " + initiatorAgent + " decided to " + decision.Name.ToString() + " towards " + decision.Target;
                break;
            }

        }


        if (finalDecision != null)

        {
           newDecision = false;
           ChooseDialogue(finalDecision, (Name)initiatorAgent);
        }

    }

    void HandlePlayerOptions(IAction decision)
    {
        _waitingForPlayer = true;

       // debugText.text = "Player Decision";
        if (decision != null)
            if (decision.Key.ToString() == "Speak")
            {
                //                                          NTerm: 0     1     2     3     4
                // If it is a speaking action it is composed by Speak ( [ms], [ns] , [m}, [sty])
                var currentState = decision.Name.GetNTerm(1);
                var nextState = decision.Name.GetNTerm(2);
                var meaning = decision.Name.GetNTerm(3);
                var style = decision.Name.GetNTerm(4);


                // Returns a list of all the dialogues given the parameters
                var dialog = _iat.GetDialogueActions(currentState, (Name)"*", (Name)"*", (Name)"*");

                foreach (var d in dialog)
                {
                    d.Utterance = _playerRpc.ProcessWithBeliefs(d.Utterance);
                }

                AddDialogueButtons(dialog, decision.Target);


            }

            else Debug.LogWarning("Unknown action: " + decision.Key);
    }

    void HandleEffects(Name _event)
    {
        var consequences = _worldModel.Simulate(new Name[] { _event });

        // For each effect 
        foreach (var eff in consequences)
        {
            Debug.Log("Effect: " + eff.PropertyName + " " + eff.NewValue + " " + eff.ObserverAgent);

            // For each Role Play Character
            foreach (var rpc in _rpcList)
            {

                //If the "Observer" part of the effect corresponds to the name of the agent or if it is a universal symbol
                if (eff.ObserverAgent != rpc.CharacterName && eff.ObserverAgent != (Name)"*") continue;
                //Apply that consequence to the agent
                rpc.Perceive(EventHelper.PropertyChange(eff.PropertyName, eff.NewValue, rpc.CharacterName));

            }
        }
        _waitingForPlayer = false;
        newDecision = true;
    }

    public void SpawnedNPC()
    {
        npc = GameObject.FindGameObjectWithTag("NPC");
        LoadFAtiMAAgent();
    }


    public void LoadFAtiMAAgent()
    {

        if (loadThroughString)
        {
            LoadThroughString();
        }
        else
        {
            LoadThroughFiles();
        }

    }

    public void LoadThroughString()
    {

        try
        {
            _storage = AssetStorage.FromJson(ScenarioStorage.storageString);
            debugText.text += "Loading Storage Sucess \n";
        }

        catch(System.Exception e)
        {
            debugText.text += "Loading Storage Error: " + e.Message;
        }


        try
        {
          
            _iat = IntegratedAuthoringToolAsset.FromJson(ScenarioStorage.scenarioString, _storage);

            debugText.text = "Load IAT Sucess \n";

            LoadedScenario();

        }

        catch (System.Exception e)
        {
            // Get stack trace for the exception with source file information
            var st = new System.Diagnostics.StackTrace(e, true);
            // Get the top stack frame
            var frame = st.GetFrame(0);
            // Get the line number from the stack frame
            var line = frame.GetFileLineNumber();

            // Get the top stack frame
            var frame1 = st.GetFrame(1);
            // Get the line number from the stack frame
            var line1 = frame.GetFileLineNumber();


            // Get the top stack frame
            var frame2 = st.GetFrame(2);
            // Get the line number from the stack frame
            var line2 = frame.GetFileLineNumber();

            // Get the top stack frame
            var frame3 = st.GetFrame(3);
            // Get the line number from the stack frame
            var line3 = frame.GetFileLineNumber();

            // Get the top stack frame
            var frame4 = st.GetFrame(4);
            // Get the line number from the stack frame
            var line4 = frame.GetFileLineNumber();

            // Get the top stack frame
            var frame5 = st.GetFrame(5);
            // Get the line number from the stack frame
            var line5 = frame.GetFileLineNumber();


            debugText.text = "Load From Json: " + e.Message + " \n Line: " + line + " f:" + frame
                 + " \n Line: " + line1 + " f:" + frame1 + " \n Line: " + line2 + "f: " + frame2
                 + " \n Line: " + line3 + "\n " + frame3
                 + " \n Line: " + line4 + "\n " + frame4
                 + " \n Line: " + line5 + "\n " + frame5;


            //recalc type trees c#
        }



    }

    public void LoadThroughFiles()
    {

        var streamingAssetsPath = Application.streamingAssetsPath;

        var actualSTORAGEPath = streamingAssetsPath + "/SingleCharacter/" + _storageName + ".json";
        var actualIATPath = streamingAssetsPath + "/SingleCharacter/" + _iatName + ".json";

        try
        {
            _storage = AssetStorage.FromJson(File.ReadAllText(actualSTORAGEPath));
            debugText.text += " Storage loading Sucess \n";
        }
        catch (System.Exception e)
        {
            debugText.text += " Storage loading Failed: " + e.Message;
        }

        try
        { 
                _iat = IntegratedAuthoringToolAsset.FromJson(File.ReadAllText(actualIATPath), _storage);
            debugText.text += " IAT loading Sucess \n";
            LoadedScenario();
        }
        catch (System.Exception e)
        {
                debugText.text += " IAT loading Failed: \n" + e.Message;
         }

       
      
    }
 

    void LoadedScenario()
    {
        var currentState = IATConsts.INITIAL_DIALOGUE_STATE;

        // Getting a list of all the Characters
        _rpcList = _iat.Characters.ToList();

        //Saving the World Model
        _worldModel = _iat.WorldModel;

       

        Debug.Log("Loading has finished");
        debugText.text = "Loaded Scenario ";
         LoadGame();
    }

    private void LoadGame()
    {
        try
        {

            var otherRPCsList = new List<RolePlayCharacterAsset>(_rpcList);

            if (_rpcList.Find(x => x.CharacterName.ToString().Contains("Player")) != null)
            {
                _playerRpc = _rpcList.Find(x => x.CharacterName.ToString().Contains("Player"));
            }
            else
            {
                _playerRpc = _rpcList[0];
            }

            _playerRpc.IsPlayer = true;

            otherRPCsList.Remove(_playerRpc);

            if (otherRPCsList.Count > 0)
            {
                this._npcRpc = otherRPCsList[0];
                _npcController = npc.GetComponentInChildren<UnityBodyImplement>();
                _npcRpc.BodyName = _npcRpc.CharacterName.ToString();

            }

            if (introduceAgents)
            {
                List<Name> events = new List<Name>();
                foreach (var r in _rpcList)
                {
                    events.Add(EventHelper.ActionEnd(r.CharacterName, (Name)"Enters", (Name)"-"));
                }

                foreach (var r in _rpcList)
                {
                    r.Perceive(events);
                    r.Update();
                }
            }

            debugText.text = "Finished Initialization";
            initialized = true;

        }

        catch (System.Exception e)
        {
            debugText.text = "Error Loading Game: " + e.Message;
        }

    }

    public void IncreaseNPCHeight()
    {
        if (npc != null)
        {
            npc.transform.position += new Vector3(0.0f, 0.2f, 0.0f);
        }
    }

    public void DecreaseNPCHeight()
    {
        if (npc != null)
        {
            npc.transform.position -= new Vector3(0.0f, 0.2f, 0.0f);
        }
    }

    void AddDialogueButtons(List<DialogueStateActionDTO> dialogs, Name target)
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

            interactable.OnClick.AddListener(() => Reply(id, _playerRpc.CharacterName, target));

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

    public void SetHappy()
    {
        npc.GetComponentInChildren<UnityBodyImplement>().SetExpression("Joy", 5);
    }

    public void SetAdmiration()
    {
        npc.GetComponentInChildren<UnityBodyImplement>().SetExpression("Admiration", 5);
    }

    public void SetAnger()
    {
        npc.GetComponentInChildren<UnityBodyImplement>().SetExpression("Anger", 5);
    }

    void Reply(System.Guid id, Name initiator, Name target)

    {
        dialogueTimerAux = dialogueTimer;
        // Retrieving the chosen dialog object
        var dialog = _iat.GetDialogActionById(id);
        var utterance = dialog.Utterance;
        var meaning = dialog.Meaning;
        var style = dialog.Style;
        var nextState = dialog.NextState;
        var currentState = dialog.CurrentState;

        // Playing the audio of the dialogue line

        if (useTextToSpeech)
        {
            this.StartCoroutine(Speak(id, initiator, target));
       
        } else if (useBackupTextToSpeech)
        {
            backupTTS.Speak(utterance);
        }



        //Writing the dialog on the canvas
        Debug.Log(
            initiator + " says:  '" + utterance + "' ->towards " + target);


        // Getting the full action Name
        var actualActionName = "Speak(" + currentState + ", " + nextState + ", " + meaning +
                               ", " + style + ")";

        //So we can generate its event
        var eventName = EventHelper.ActionEnd(initiator, (Name)actualActionName, target);


        ClearAllDialogButtons();

        //Inform each participating agent of what happened

        _rpcList.Find(x => x.CharacterName == initiator).Perceive(eventName);
        _rpcList.Find(x => x.CharacterName == target).Perceive(eventName);

        //Handle the consequences of their actions
        HandleEffects(eventName);
    }

    void ChooseDialogue(IAction action, Name initiator)
    {
        debugText.text = " The agent " + initiator + " decided to perform " + action.Name + " towards " + action.Target;

        //                                          NTerm: 0     1     2     3     4
        // If it is a speaking action it is composed by Speak ( [ms], [ns] , [m}, [sty])
        var currentState = action.Name.GetNTerm(1);
        var nextState = action.Name.GetNTerm(2);
        var meaning = action.Name.GetNTerm(3);
        var style = action.Name.GetNTerm(4);


        // Returns a list of all the dialogues given the parameters but in this case we only want the first element
        var dialog = _iat.GetDialogueActions(currentState, nextState, meaning, style).FirstOrDefault();


        if (dialog != null)
            Reply(dialog.Id, initiator, action.Target);
    }

    IEnumerator GetAudioURL(string path)
    {
        debugText.text = "Getting Audio URL";
      audio = UnityWebRequestMultimedia.GetAudioClip(path, AudioType.WAV);

        yield return audio.SendWebRequest();

        if (audio.result != UnityWebRequest.Result.Success)
        {

            if (audio.result == UnityWebRequest.Result.DataProcessingError || audio.result == UnityWebRequest.Result.ConnectionError || audio.result == UnityWebRequest.Result.ProtocolError)
            {
                debugText.text = "Audio not found error: " + audio.error;
                Debug.Log("Audio not found error: " + audio.error);
                audioReady = true;
                useTextToSpeech = false;
                useBackupTextToSpeech = true;
                yield return null;
            }
        }
        else
        {
            useBackupTextToSpeech = false;
            audioReady = true;
        }

    }

    IEnumerator GetXML(string path)
    {
        debugText.text = "Getting XML";
        UnityEngine.Networking.UnityWebRequest www = UnityEngine.Networking.UnityWebRequest.Get(path);

        yield return www.SendWebRequest();

        if (www.result != UnityWebRequest.Result.Success)
        {
            if (www.result == UnityWebRequest.Result.DataProcessingError || www.result == UnityWebRequest.Result.ConnectionError || www.result == UnityWebRequest.Result.ProtocolError)
            {
                debugText.text = "XML not found error " + www.error;
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

    // Method to play the audio file of the specific dialogue, aka what makes the agent talk
    private IEnumerator Speak(System.Guid id, Name initiator, Name target)
    {

        // The player has no body, as a consequence there is no reason for him to speak
        if (_playerRpc.CharacterName == initiator)
            yield break;


        audioNeeded = true;
        xmlReady = false;
        audioReady = false;
        this.initiator = initiator.ToString();
        // What is the type of of Voice of the agent
        var voiceType = _rpcList.Find(x => x.CharacterName == initiator).VoiceName;

        // Each utterance has a unique Id so we can retrieve its audio file
        var utteranceID = _iat.GetDialogActionById(id).UtteranceId;

        // This path can be changed, for now it is the path we used in this project
        var textToSpeechPath = "/SingleCharacter/TTS/" + voiceType + "/" + utteranceID;

        var absolutePath = Application.streamingAssetsPath;


        // System tries to "download" the .wav file along with its xml configuration
        string audioUrl = absolutePath + textToSpeechPath + ".wav";
        string xmlUrl = absolutePath + textToSpeechPath + ".xml";

        StartCoroutine(GetXML(xmlUrl));
        StartCoroutine(GetAudioURL(audioUrl));

    }

    

    private IEnumerator PlayAudio()
    {

        if (useTextToSpeech)
        {
            debugText.text = "Speaking? ";
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

}
