using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class getCoin : MonoBehaviour
{
    public GameObject pickupEffect;
    public GameManager gameManager;
    bool collEd=false;
    // Start is called before the first frame update
    void OnCollisionEnter (Collision other){
        if(other.gameObject.tag=="main" || other.gameObject.tag=="aaa" && collEd==false){
            int blabla = PlayerPrefs.GetInt("score", 0)+PlayerPrefs.GetInt("multier", 1);
            PlayerPrefs.SetInt("score", blabla);     
            pickCoin();
            gameManager.scorePlus();
            collEd=true;
        }


    }

    private void pickCoin()
    {
        Debug.Log("Coin+1");
        
        FindObjectOfType<AudioManager>().Play("getCoin");

        Instantiate(pickupEffect,transform.position,transform.rotation);

        Destroy(gameObject);
    }
}
