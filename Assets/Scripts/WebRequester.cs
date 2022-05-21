using System;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using UnityEngine.Networking;
using UnityEngine;
using TMPro;
using System.Text.RegularExpressions;
using Newtonsoft.Json.Linq;
using Newtonsoft.Json;
using System.IO;

namespace Assets.Scripts
{
    public class WebRequester : MonoBehaviour
    {
        public string Editor_IP;
        private string IP;
        private string keyboardText;
        private string currentCharacter;

        string getResult = "";
        FAtiMAWebServerScenarioManager manager;
        public TMPro.TMP_InputField inputIP;

        void Awake()
        {
            manager = this.GetComponent<FAtiMAWebServerScenarioManager>();

#if UNITY_EDITOR

            IP = Editor_IP;
#else
            var path = Path.Combine(Application.streamingAssetsPath, "IP.txt");
            var ip = ReadString(path);
            IP = ip;
            manager.debugText.text += " path: " + path + "\n";
#endif


            
            manager.debugText.text += "IP: " + IP + "\n";
            inputIP.text += IP;
        }

        public  IEnumerator getRequest(string uri, Action callback)
        {
            Debug.Log("Getting: " + uri);
            UnityWebRequest uwr = UnityWebRequest.Get(uri);
            yield return uwr.SendWebRequest();

            if (uwr.result == UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log("Error While Sending: " + uwr.error);
                manager.debugText.text += "Error : " + uwr.error;
            }
            else
            {
                Debug.Log("Received: " + uwr.downloadHandler.text);
                manager.debugText.text += "Received: " + uwr.downloadHandler.text + "\n";
                getResult = uwr.downloadHandler.text;
                callback.Invoke();
            }
        }

        IEnumerator postRequest(string url, string[] json, Action callback)
        {
         
            var actualJson = JsonConvert.SerializeObject(json);
            Debug.Log("Posting: " + actualJson);
            var uwr = new UnityWebRequest(url, "POST");
            byte[] jsonToSend = new System.Text.UTF8Encoding().GetBytes(actualJson);
            uwr.uploadHandler = (UploadHandler)new UploadHandlerRaw(jsonToSend);
            uwr.downloadHandler = (DownloadHandler)new DownloadHandlerBuffer();
            uwr.SetRequestHeader("Content-Type", "application/json");
           
            //Send the request then wait here until it returns
            yield return uwr.SendWebRequest();

            if (uwr.result == UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log("Error While Sending: " + uwr.error);
            }
            else
            {
                Debug.Log("Received: " + uwr.downloadHandler.text);
                callback.Invoke();
            }
        }

        IEnumerator resetRequest(string url, Action callback)
        {
            Debug.Log("Getting: " + url);

            var uwr = new UnityWebRequest(url, "RESET");
            yield return uwr.SendWebRequest();

            if (uwr.result == UnityWebRequest.Result.ConnectionError)
            {
                Debug.Log("Error While Sending: " + uwr.error);
                manager.debugText.text = "Error : " + uwr.error;
            }
            else
            {
                Debug.Log("Received: " + uwr.downloadHandler.text);
                manager.debugText.text += "Received: " + uwr.downloadHandler.text + "\n";
                getResult = uwr.downloadHandler.text;
                callback.Invoke();
            }
        }

        #region FAtiMA2Server

        List<string> CleanScenarioOutput(string output)
        {
            List<string> retList = new List<string>();

            output = output.Replace("\"", "");

            var pattern = @"\[(.*?)\]";
          
            var scenarios = Regex.Matches(output, pattern).Cast<Match>().Select(m => m.Groups[1].Value).ToList();


            return scenarios;
        }

        List<string> CleanCharacterOutput(string output)
        {
            List<string> retList = new List<string>();

            output = output.Replace("\"", "");

            var pattern = @"\{(.*?)\}";

            var characters = Regex.Matches(output, pattern).Cast<Match>().Select(m => m.Groups[1].Value).ToList();


            return characters;
        }

        public void GetScenarios()
        {
            var url = IP + "/scenarios";
            Debug.Log("Connection to: " + url);
            StartCoroutine(this.getRequest(url, GotScenarios));

        }

        public void ResetScenario(string scenarioName)
        {
            var url = IP + "/scenarios/" + scenarioName;
            StartCoroutine(this.resetRequest(url, CompletedReset));
        }

        public void CompletedReset()
        {
            manager.ResetedScenario();
        }


        public void GotScenarios()
        {
            if(getResult != null && getResult.Count()>0)
                manager.SetScenarioName(CleanScenarioOutput(getResult)[0]);
        }

        public void GetAllCharacters(string scenarioName)
        {

            var url = IP + "/scenarios/" + scenarioName + "/instances/1/Characters";

            StartCoroutine(getRequest(url, GotAllCharacters));

        }

        public void GotAllCharacters()
        {
            if (getResult == null || getResult.Count() == 0)
                return;
            
            var charList = CleanCharacterOutput(getResult);
            var characterNamesList = new List<string>();
            // Clean even further
            foreach(var c in charList)
            {
                var agent = c.Split(',');
                agent = agent[0].Split(':');
                characterNamesList.Add(agent[1]);

            }

            manager.SetCharacters(characterNamesList);

        }

        public void GetDecisions(string scenarioName, string character)
        {
            var url = IP + "/scenarios/" + scenarioName + "/instances/1/Characters/" + character + "/decisions";

            currentCharacter = character;

            StartCoroutine(getRequest(url, GotDecisions));
        }

        public void GotDecisions()
        {
            manager.DecisionHandler(CleanCharacterOutput(getResult), currentCharacter);
        }

        public void GetEmotionalState(string scenarioName, string character)
        {
            var url = IP + "/scenarios/" + scenarioName + "/instances/1/Characters/" + character + "/emotions";

            currentCharacter = character;

            StartCoroutine(getRequest(url, GotEmotions));
        }

        public void GotEmotions()
        {
            HandleEmotionalOutput();
        }

        public void HandleEmotionalOutput()
        {
            var internalState = CleanCharacterOutput(getResult)[0];

            var emotionInformation = manager.Between(internalState, "Emotions:", "");

            var strongestEmotion = manager.Between(emotionInformation, "Type:", ",Int");

            var intensityAux = manager.Between(emotionInformation, "Intensity:", ",Target:").Split('.')[0];


            int intensity = Int32.Parse(intensityAux);

            manager.strongestEmotion = strongestEmotion;
            manager.emotionIntensity = intensity;
        }


        public void PostConsequences()
        {
            manager.WorldChanged(currentCharacter);
        }

        public void PostEvents(string scenarioName, string character, string[] events)
        {
            var url = IP + "/scenarios/" + scenarioName + "/instances/1/worldmodel";
            currentCharacter = character;
            StartCoroutine(postRequest(url, events, PostConsequences));
        }

        #endregion

    

        public string ReadString(string path)
        {
            //Read the text from directly from the test.txt file
            StreamReader reader = new StreamReader(path);
            var ret = reader.ReadLine();
            reader.Close();
            return ret;
        }

        public void WriteString(string path, string text)
        {
            //Read the text from directly from the test.txt file
            StreamWriter writer = new StreamWriter(path);
            writer.WriteLine(text);
            writer.Close();
        }

        #region Keyboard
        public TouchScreenKeyboard keyboard;

        public void OpenSystemKeyboard()
        {
            keyboard = TouchScreenKeyboard.Open(inputIP.text, TouchScreenKeyboardType.Default, false, false, false, false);
        }

        void Update()
        {
            if(keyboard != null)
            {
                inputIP.text = keyboard.text;
            }
        }

        public void SetIP()
        {
            IP = keyboardText;

            var path = Path.Combine(Application.streamingAssetsPath, "IP.txt");
            WriteString(path, IP);
            
            Debug.Log("Set IP " + IP);
        }


        #endregion


    }
}
