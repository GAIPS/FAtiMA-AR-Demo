using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Microsoft.MixedReality.Toolkit.Audio;

public class TTSHandler : MonoBehaviour
{
    private TextToSpeech tts;

    private void Start()
    {
        tts = this.GetComponent<TextToSpeech>();
    }

    public void SaySomething()
    {
        Debug.Log("We should talk");
        var speakText = "Hello World, How are you though?";

        var msg = string.Format(speakText, tts.Voice.ToString());
        tts.StartSpeaking(msg);
    }
}
