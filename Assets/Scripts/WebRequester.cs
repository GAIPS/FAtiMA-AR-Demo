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

namespace Assets.Scripts
{
    public class WebRequester : MonoBehaviour
    {
        public string Editor_IP;
        public string RemoteDevice_IP;
        private string IP;
             

        string getResult = "";
        FAtiMAWebServerScenarioManager manager;
        public TMPro.TMP_InputField inputIP;

        void Awake()
        {
#if UNITY_EDITOR

            IP = Editor_IP;
#else
            IP = RemoteDevice_IP;
#endif
            Debug.Log("IP: " + IP);
            manager = this.GetComponent<FAtiMAWebServerScenarioManager>();
            manager.debugText.text += IP;
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
                manager.debugText.text = "Error : " + uwr.error;
            }
            else
            {
                Debug.Log("Received: " + uwr.downloadHandler.text);

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

        public void GotScenarios()
        {
            manager.SetScenarioName(CleanScenarioOutput(getResult)[0]);
        }

        public void GetAllCharacters(string scenarioName)
        {

            var url = IP + "/scenarios/" + scenarioName + "/instances/1/Characters";

            StartCoroutine(getRequest(url, GotAllCharacters));

        }

        public void GotAllCharacters()
        {
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

        public void GetDecisionsNPC(string scenarioName, string character)
        {
            var url = IP + "/scenarios/" + scenarioName + "/instances/1/Characters/" + character + "/decisions";

            StartCoroutine(getRequest(url, GotDecisionNPC));
        }

        public void GotDecisionNPC()
        {
            StopAllCoroutines();

            manager.DecisionHandler(CleanCharacterOutput(getResult), manager.npcChar);
        }

        public void PostEvents(string scenarioName, string character, string[] events)
        {
            var url = IP + "/scenarios/" + scenarioName + "/instances/1/worldmodel";

            StartCoroutine(postRequest(url, events, GetDecisionsPlayer));
        }


        public void GetDecisionsPlayer()
        {
            var url = IP + "/scenarios/" + manager._scenarioName + "/instances/1/Characters/" + manager.playerChar + "/decisions";

            StartCoroutine(getRequest(url, GotDecisionPlayer));

        }

        public void GotDecisionPlayer()
        {
            var decisions = getResult.Split('\n');

            manager.DecisionHandler(CleanCharacterOutput(getResult), manager.playerChar);

            StopAllCoroutines();
        }

        #endregion

        public void ResetConnection()
        {

        }
    }
}
