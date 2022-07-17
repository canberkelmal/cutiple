using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Menu : MonoBehaviour
{
    public Text fwText;
    public Text HrText;
    public Text mouseText;
    public Text kbText;
    public GameObject fwSlider;
    public GameObject HrSlider;
    public Toggle master;
    public Toggle music;
    void Start(){
        fwSlider.GetComponent<Slider>().value = PlayerPrefs.GetFloat("forwardForce",9);
        HrSlider.GetComponent<Slider>().value = PlayerPrefs.GetFloat("horizontalForce",7);
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

        if(PlayerPrefs.GetInt("remote",0)>0.5f){//keyboard
            kbText.fontStyle = FontStyle.Bold;
            mouseText.fontStyle = FontStyle.Normal;
            HrSlider.gameObject.SetActive(true);
        }
        else{//mouse
            kbText.fontStyle = FontStyle.Normal;
            mouseText.fontStyle = FontStyle.Bold;
            HrSlider.gameObject.SetActive(false);
        }
    }
    public void setRemote(float x){
        if(x>0.5f){
            PlayerPrefs.SetInt("remote",1);//keyboard
            kbText.fontStyle = FontStyle.Bold;
            mouseText.fontStyle = FontStyle.Normal;
            HrSlider.gameObject.SetActive(true);
        }
        else{
            PlayerPrefs.SetInt("remote",0);//mouse
            kbText.fontStyle = FontStyle.Normal;
            mouseText.fontStyle = FontStyle.Bold;
            HrSlider.gameObject.SetActive(false);
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
