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
    public Scrollbar remoteScroll;
    void Start(){
        fwSlider.GetComponent<Slider>().value = PlayerPrefs.GetFloat("forwardForce",9f);
        HrSlider.GetComponent<Slider>().value = PlayerPrefs.GetFloat("horizontalForce",7f);
        fwText.text = "Forward Force: " + PlayerPrefs.GetFloat("forwardForce",9f).ToString();
        HrText.text = "Horizontal Force: " + PlayerPrefs.GetFloat("horizontalForce",7f).ToString();

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
            remoteScroll.value=1;
        }
        else{//mouse
            kbText.fontStyle = FontStyle.Normal;
            mouseText.fontStyle = FontStyle.Bold;
            HrSlider.gameObject.SetActive(false);
            remoteScroll.value=0;
        }
    }

    public void onClicked(){
        if(PlayerPrefs.GetInt("remote",0)>0.5f){//to mouse
            setRemote(0.01f);
        }
        else{//to kb
            setRemote(0.99f);
        }
        Start();
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
