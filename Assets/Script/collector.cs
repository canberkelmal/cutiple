using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;

public class collector : MonoBehaviour
{
    GameObject mainCube;
    public GameObject pickupEffect;
    public GameManager gameManager;
    int height;
    public Vector3 targetAngle = new Vector3(0f, 360f, 0f);
    void Start()
    {
        mainCube=GameObject.Find("MainBox");
        mainCube.transform.position=new Vector3(transform.position.x, height+1, transform.position.z);
        this.transform.localPosition=new Vector3(0,-height,1);
    }

    // Update is called once per frame
    void Update()
    {   
        if(Input.GetKeyDown(KeyCode.RightControl) || Input.GetKeyDown(KeyCode.R)){
             Scene scene = SceneManager.GetActiveScene();
             SceneManager.LoadScene(scene.name);
        }
        if(Input.GetKeyDown(KeyCode.Escape)){
            SceneManager.LoadScene("Menu");
        }
        gameManager.CollPos();
        /* mainCube.transform.position=new Vector3(transform.position.x, height+1, transform.position.z);
        this.transform.localPosition=new Vector3(0,-height,0); */
    }
    public void decreeseHeight(){
        height--;
        //mainCube.transform.position=new Vector3(transform.position.x, height+1, transform.position.z);
        this.transform.localPosition=new Vector3(0,-height,1);
    }


    void OnCollisionEnter(Collision other){
        Debug.Log("hit");
        if (other.gameObject.tag=="END"){            
            Scene scene = SceneManager.GetActiveScene();
            SceneManager.LoadScene("Credits");
            PlayerPrefs.GetInt("failed", 0);
            Debug.Log("hit to end");
        }
        if (other.gameObject.tag == "aaa" && other.gameObject.GetComponent<CollCube>().getCollEd()==false){
            Debug.Log("hit to box");
            height+=1;
            
            gameManager.CollPos();
            gameManager.multierPlus();
            FindObjectOfType<AudioManager>().Play("collect");
            
            Instantiate(pickupEffect,transform.position, rotation: Quaternion.Euler(targetAngle));
            mainCube.transform.position=new Vector3(mainCube.transform.position.x, height+1, mainCube.transform.position.z);
            other.gameObject.transform.parent=mainCube.transform;
            other.transform.localPosition=new Vector3(0,other.transform.localPosition.y,0);
            this.transform.localPosition=new Vector3(0,-height,1);
            other.gameObject.GetComponent<CollCube>().doColl();
            //other.gameObject.GetComponent<CollCube>().setIndex(height);
            //ÖNEMLİother.transform.localPosition=new Vector3(0,other.transform.position.y,0);
            //other.gameObject.GetComponent<BoxCollider>().isTrigger=false;
            /* if(height==1)
            other.transform.localPosition=new Vector3(0,-1,0);
            else{
                
            other.transform.localPosition=new Vector3(0,other.transform.localPosition.y-1,0);
            } */
        }
    }
}
