using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    public static bool GameIsPaused = false;
    public GameObject pauseMenuUI;
    public Text tx1;
    public Text tx2;
    public Text tx3;
    public Text tx4;
    Color c1, c2, c3, c4, x1, x2, x3, x4;
    void Start ()
    {
        c1 = x1=tx1.color;
        c1.a=0.3f;
        c2 = x2=tx2.color;
        c2.a=0.3f;
        c3 =x3= tx3.color;
        c3.a=0.3f;
        c4 =x4= tx4.color;
        c4.a=0.3f;
    }
    void Update()
    {
        if(GameIsPaused){
        }
        else{
        }
    }
    public void Pause()
    {
        if(GameIsPaused){
           Resume();
           return;
        }
        GameIsPaused = true;
        pauseMenuUI.SetActive(true);
        Time.timeScale = 0.3f;
        Movement.forwardV=0;
        Movement.smoothSpeed=0f;
        tx1.color=c1;
        tx2.color=c2;
        tx3.color=c3;
        tx4.color=c4;

    }
    public void Resume()
    {
        GameIsPaused = false;
        pauseMenuUI.SetActive(false);
        Time.timeScale = 1f;
        Movement.forwardV=PlayerPrefs.GetFloat("forwardForce",9f);
        Movement.smoothSpeed=PlayerPrefs.GetFloat("smoothSpeed",0.25f);
        tx1.color=x1; 
        tx2.color=x2;
        tx3.color=x3;
        tx4.color=x4;
    }
    public void Menu()
    {
        Time.timeScale = 1f;
        SceneManager.LoadScene("Menu");
    }
    public void Quit()
    {
        Application.Quit();
    }
    public void Restart()
    {
        Time.timeScale = 1f;
        PlayerPrefs.DeleteKey("score");
        PlayerPrefs.DeleteKey("multier");
        PlayerPrefs.DeleteKey("pos");
        SceneManager.LoadScene("SampleScene");
    }
    
}
