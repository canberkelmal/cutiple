using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Menu : MonoBehaviour
{
    void Start(){
        PlayerPrefs.GetInt("volume",1);
        PlayerPrefs.GetInt("music",1);
    }
    public void StartGame(){

        Debug.Log("Start");
        PlayerPrefs.DeleteKey("score");
        PlayerPrefs.DeleteKey("multier");
        PlayerPrefs.DeleteKey("pos");
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex+1);

    }

    public void setVolume(bool isOn){
        if(isOn){
            PlayerPrefs.SetInt("volume",1);
        }
        else{
            PlayerPrefs.SetInt("volume",0);
        }
    }

    public void setMusic(bool isOn){
        if(isOn){
            PlayerPrefs.SetInt("music",1);
        }
        else{
            PlayerPrefs.SetInt("music",0);
        }
    }
}
