using UnityEngine;
using UnityEngine.UI;

using System.Collections;
public class GameManager : MonoBehaviour
{
    public Text multier;
    public Text score;
    public Text posText;
    public Transform CollectorTrans;
    public int multierValue;
    public float animationDuration=0.001f;

    public void Start(){
        PlayerPrefs.SetInt("multier", 1);
        PlayerPrefs.SetInt("score", 0);
        multier.text = PlayerPrefs.GetInt("multier", 1).ToString();
        score.text = PlayerPrefs.GetInt("score", 0).ToString();
        posText.text = PlayerPrefs.GetFloat("pos", CollectorTrans.position.y).ToString();
        
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
        posText.text = PlayerPrefs.GetFloat("pos",CollectorTrans.position.y).ToString();

        //StartCoroutine(scoreIn(posText));
    }

    IEnumerator scoreIn(Text a){
        for(int i=0; i<17;i++){
        a.fontSize=a.fontSize+3;
        yield return new WaitForSeconds(animationDuration);
        }
        
        for(int i=0; i<17;i++){
        a.fontSize=a.fontSize-3;
        yield return new WaitForSeconds(animationDuration);
        }
    }

}
