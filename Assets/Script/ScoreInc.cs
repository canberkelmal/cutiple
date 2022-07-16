
using UnityEngine;
using System.Collections;
using UnityEngine.UI;



public class ScoreInc : MonoBehaviour
{
    public Text currentScore;

    void Start()
    {
        StartCoroutine(scoreCount());
    }
    IEnumerator scoreCount(){
        currentScore.fontSize=54;
        for(int i=0; i<=PlayerPrefs.GetInt("score"); i++){
            if(PlayerPrefs.GetInt("score")-i>8)
                i=i+7;
            currentScore.text=i.ToString();
            yield return new WaitForSeconds(0.005f);
            if(i>=PlayerPrefs.GetInt("score")-17 && i<PlayerPrefs.GetInt("score")-1){
                currentScore.fontSize=currentScore.fontSize+10;
                yield return new WaitForSeconds(0.05f);
            }
            if(i>=PlayerPrefs.GetInt("score")-1){
                currentScore.text=PlayerPrefs.GetInt("score").ToString();
                for(int j=0;j<=16;j++){
                    if(currentScore.fontSize>54){
                        currentScore.fontSize=currentScore.fontSize-10;
                        yield return new WaitForSeconds(0.05f);
                    }
                }
                currentScore.fontSize=54;
            }
        }
    }

    IEnumerator scoreIn(){
        
        yield return new WaitForSeconds(PlayerPrefs.GetInt("score")*0.01f);//wait for count finish.
        
        for(int i=0; i<17;i++){
        currentScore.fontSize=currentScore.fontSize+3;
        yield return new WaitForSeconds(0.01f);
        }
        
        for(int i=0; i<17;i++){
        currentScore.fontSize=currentScore.fontSize-3;
        yield return new WaitForSeconds(0.01f);
        }
    }
    
    
}
