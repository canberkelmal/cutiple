using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class getCoin : MonoBehaviour
{
    public GameObject pickupEffect;
    public GameManager gameManager;
    // Start is called before the first frame update
    void OnCollisionEnter (Collision other){
        if(other.gameObject.tag=="main" || other.gameObject.tag=="aaa"){
            pickCoin();
        }


    }

    private void pickCoin()
    {
        Debug.Log("Coin+1");
        
        FindObjectOfType<AudioManager>().Play("getCoin");

        Instantiate(pickupEffect,transform.position,transform.rotation);

        gameManager.scorePlus();

        Destroy(gameObject);
    }
}
