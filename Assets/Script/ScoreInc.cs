
using UnityEngine;
using System.Collections;
using UnityEngine.UI;



public class ScoreInc : MonoBehaviour
{
    public Text currentScore;
    public int score;

    void Start()
    {
        score=PlayerPrefs.GetInt("score", 0);
        StartCoroutine(scoreCount());
    }

    IEnumerator scoreCount(){
        currentScore.fontSize=54;
        for(int i=0; i<=score; i++){
            if(score-i>8){
                i=i+7;
            }
            currentScore.text=i.ToString();

            yield return new WaitForSeconds(0.006f);
            
            if(i<score){
                currentScore.fontSize++;
            }
        
            if(i==score){
                currentScore.text=score.ToString();
                for(int j=0;j<=16;j++){
                    if(currentScore.fontSize>54){
                        currentScore.fontSize=currentScore.fontSize-10;
                        yield return new WaitForSeconds(0.04f);
                    }
                }
                currentScore.fontSize=54;
            }

        }
    }
}
