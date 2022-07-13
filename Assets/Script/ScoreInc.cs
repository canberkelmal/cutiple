
using UnityEngine;
using System.Collections;
using UnityEngine.UI;



public class ScoreInc : MonoBehaviour
{
    public Text currentScore;

    void Start()
    {
        StartCoroutine(scoreCount());
        StartCoroutine(scoreIn());
    }
    IEnumerator scoreCount(){
        for(int i=0; i<=PlayerPrefs.GetInt("score"); i++){
            currentScore.text=i.ToString();
        yield return new WaitForSeconds(0.01f);
        }
    }

    IEnumerator scoreIn(){
        
        yield return new WaitForSeconds(PlayerPrefs.GetInt("score")*0.01f);//wait for count finish.
        
        for(int i=0; i<17;i++){
        currentScore.fontSize=currentScore.fontSize+3;
        yield return new WaitForSeconds(0.02f);
        }
        
        for(int i=0; i<17;i++){
        currentScore.fontSize=currentScore.fontSize-3;
        yield return new WaitForSeconds(0.02f);
        }
    }
    
    
}
