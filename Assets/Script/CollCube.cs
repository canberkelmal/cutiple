using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;

public class CollCube : MonoBehaviour
{
    public GameManager gameManager;
    bool collEd;
    //bool added;
    int index;
    public collector collector;
    public Transform LostCubes;
    void Start()
    {
        collEd=false;
        //added=false;
    }

    // Update is called once per frame
    void Update()
    {
        //if(transform.parent.gameObject.name=="Tower" && added==true)
        //    transform.localPosition=new Vector3(0,transform.localPosition.y,0);

        /* if(collEd==true){
            if(transform.parent!=null){
                transform.localPosition=new Vector3(0,-index,0);        
            }
        } */
        
        //if(PlayerPrefs.GetInt("added",0)==1){
        //    added=true;
        //}
        if(transform.position.y>1.1 && transform.parent==null){            
            GetComponent<Rigidbody>().useGravity=true;
            GetComponent<Rigidbody>().isKinematic=false;
        }
        if(transform.position.y<0.9 && transform.parent==null){            
            GetComponent<Rigidbody>().useGravity=false;
            GetComponent<Rigidbody>().isKinematic=true;
        } 
    }

    void OnCollisionEnter (Collision other){
        if(other.gameObject.tag=="set"){
            other.gameObject.tag="c";
            FindObjectOfType<AudioManager>().Play("lost");
            collector.decreeseHeight();
            transform.SetParent(null);
            GetComponent<BoxCollider>().enabled=true;
            //other.gameObject.GetComponent<BoxCollider>().enabled=false;
            GetComponent<Rigidbody>().useGravity=false;
            GetComponent<Rigidbody>().isKinematic=true;
            gameManager.multierMinus();
        }
    }
    public bool getCollEd(){
        return collEd;
    }
    public void doColl(){
        collEd=true;
    
    }
    public void setIndex(int index){
        this.index=index;
    }
}
