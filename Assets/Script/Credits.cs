
using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class Credits : MonoBehaviour
{
    public GameObject HS;
    
    public GameObject NEW;

    public Text title;

    void Start(){
        if (PlayerPrefs.GetInt("failed") == 1)
        {
            title.text = "You Failed!";
            title.color= Color.red;
        }
        else
        {
            title.text = "Thanks for PLAYING!";
            title.color= new Color32(50,50, 50, 255);
        }
    }

    public void Update(){
        if(Input.GetKeyDown(KeyCode.RightControl) || Input.GetKeyDown(KeyCode.R)){
             Scene scene = SceneManager.GetActiveScene();
             SceneManager.LoadScene(scene.name);
        }

    }

    public void Quit(){
        Debug.Log("Quit!");
        Application.Quit();

    }

    public void playAgain(){
        Debug.Log("Play Again!");
        SceneManager.LoadScene("Menu");
        PlayerPrefs.SetInt("failed", 0);
    }

    public void resetHS(){
        HS=GameObject.Find("HighScoree");
        NEW=GameObject.Find("NEW");
        Debug.Log("Reset High Score!");
        PlayerPrefs.SetInt("HighScore",0);
        HS.GetComponent<UnityEngine.UI.Text>().text = PlayerPrefs.GetInt("HighScore", 0).ToString();
        NEW.SetActive(false);
    }
}
