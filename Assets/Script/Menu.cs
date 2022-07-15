using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Menu : MonoBehaviour
{
    public Text fwText;
    public Text HrText;
    public Slider fwSlider;
    public Slider HrSlider;
    public Toggle master;
    public Toggle music;
    void Start(){
        fwSlider.value = PlayerPrefs.GetFloat("forwardForce",9);
        HrSlider.value = PlayerPrefs.GetFloat("horizontalForce",7);
        fwText.text = "Forward Force: " + PlayerPrefs.GetFloat("forwardForce",9).ToString();
        HrText.text = "Horizontal Force: " + PlayerPrefs.GetFloat("horizontalForce",7).ToString();

        if(PlayerPrefs.GetInt("volume")==1){
            master.isOn = true;
            music.interactable = true;
        }
        else{
            master.isOn = false;
            music.interactable = false;
        }

        if(PlayerPrefs.GetInt("music")==1 && master.isOn){
            music.isOn = true;
        }
        else{
            music.isOn = false;
        }
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
            music.interactable = true;
        }
        else{
            PlayerPrefs.SetInt("volume",0);
            music.interactable = false;
            music.isOn=false;
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

    public void setForwardForce(float a){
        PlayerPrefs.SetFloat("forwardForce",a);
        fwText.text = "Forward Force: " + a.ToString();
    }

    public void setHorizontalForce(float b){
        PlayerPrefs.SetFloat("horizontalForce",b);
        HrText.text = "Horizontal Force: " + b.ToString();
    }
}
