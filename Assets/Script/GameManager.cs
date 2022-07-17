using UnityEngine;
using UnityEngine.UI;

using System.Collections;
public class GameManager : MonoBehaviour
{
    public Text multier;
    public Text score;
    //public Text posText;
    public Transform CollectorTrans;
    public int multierValue;
    public float animationDuration=0.001f;

    public void Start(){
        PlayerPrefs.SetInt("multier", 1);
        PlayerPrefs.SetInt("score", 0);
        multier.text = PlayerPrefs.GetInt("multier", 1).ToString();
        score.text = PlayerPrefs.GetInt("score", 0).ToString();
        //posText.text = PlayerPrefs.GetFloat("pos", CollectorTrans.position.y).ToString();
        
        
        FindObjectOfType<AudioManager>().setVolume("Theme", PlayerPrefs.GetInt("music"));
        if(PlayerPrefs.GetInt("volume")==1){
            FindObjectOfType<AudioManager>().mute(false);
        }
        else{
            FindObjectOfType<AudioManager>().mute(true);
        }
        
        Debug.Log("gamemanager started");
    }

    public void scorePlus(){
        PlayerPrefs.SetInt("score", PlayerPrefs.GetInt("score", 0)+(PlayerPrefs.GetInt("multier", 1)));
        score.text = PlayerPrefs.GetInt("score", 0).ToString();
            
            StartCoroutine(scoreIn(score));
    }

    public void multierPlus(){
        
        multierValue=PlayerPrefs.GetInt("multier");
        PlayerPrefs.SetInt("multier",multierValue+1);
        multierValue=PlayerPrefs.GetInt("multier");
        multier.text = "X " + multierValue.ToString();

            StartCoroutine(scoreIn(multier));
    }
    
    public void multierMinus(){
        
        multierValue=PlayerPrefs.GetInt("multier");
        PlayerPrefs.SetInt("multier",multierValue-1);
        multierValue=PlayerPrefs.GetInt("multier");
        multier.text = "X " + multierValue.ToString();

            StartCoroutine(scoreIn(multier));
    }
    public void CollPos(){
        
        PlayerPrefs.SetFloat("pos",CollectorTrans.position.y);
        //posText.text = PlayerPrefs.GetFloat("pos",CollectorTrans.position.y).ToString();

        //StartCoroutine(scoreIn(posText));
    }

    IEnumerator scoreIn(Text a){
        for(int i=0; i<8;i++){
        a.fontSize=a.fontSize+3;
        yield return new WaitForSeconds(animationDuration);
        if(a.fontSize>96){
            a.fontSize=96;
            break;
        }
        }
        
        while(a.fontSize>40){
        a.fontSize=a.fontSize-3;
        yield return new WaitForSeconds(animationDuration);
        }
        a.fontSize=40;
    }

}
