using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using System;
using DG.Tweening;

public class collector : MonoBehaviour
{
    GameObject mainCube;
    GameObject Tower;
    public GameObject pickupEffect;
    public GameManager gameManager;
    int height;
    public Vector3 targetAngle = new Vector3(0f, 360f, 0f);
    public Vector3 targetPos2;
    public float getAnimDur;
    void Start()
    {
        mainCube=GameObject.Find("MainBox");
        Tower=GameObject.Find("Tower");
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
        /* mainCube.transform.position=new Vector3(transform.position.x, height+1, transform.position.z);
        this.transform.localPosition=new Vector3(0,-height,0); */
    }
    public void decreeseHeight(){
        height--;
        //mainCube.transform.position=new Vector3(transform.position.x, height+1, transform.position.z);
        //this.transform.localPosition=new Vector3(0,-height,1);
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
            
            gameManager.multierPlus();
            FindObjectOfType<AudioManager>().Play("collect");
            
            Instantiate(pickupEffect,transform.position, rotation: Quaternion.Euler(targetAngle));
            //mainCube.transform.position=new Vector3(mainCube.transform.position.x, height+1, mainCube.transform.position.z);
            
            other.gameObject.transform.parent=Tower.gameObject.transform;
            other.gameObject.transform.position=new Vector3(mainCube.transform.position.x-1, 1, mainCube.transform.position.z);
            if(Tower.transform.childCount<2)
                other.gameObject.transform.DOJump(new Vector3(mainCube.transform.position.x, height+1, mainCube.transform.position.z), 0.3f,1,0.2f);
            
            if(Tower.transform.childCount>=2)
                other.gameObject.transform.DOJump(new Vector3(Tower.transform.GetChild(Tower.transform.childCount-1).transform.position.x, height+1, Tower.transform.GetChild(Tower.transform.childCount-1).transform.position.z), 0.3f,1,0.3f);
            //                            .OnComplete(Fallow);

            //targetPos2 = Vector3.MoveTowards(other.gameObject.transform.position, mainCube.transform.position+new Vector3(0, height, 0), getAnimDur);
            //other.gameObject.transform.position=targetPos2;

            //}
            //else{
            //    other.gameObject.transform.DOLocalJump(new Vector3(other.gameObject.transform.parent.GetChild(other.gameObject.transform.parent.childCount-1).position.x, height, other.gameObject.transform.parent.GetChild(other.gameObject.transform.parent.childCount-1).position.z), 0.3f,1,0.2f)
            //                              .OnComplete(Fallow);

            //}
            //other.gameObject.transform.DOLocalJump(new Vector3(0,height-1,0), 0.2f,1,1f).OnComplete(() => PlayerPrefs.SetInt("added",1));
            //this.transform.localPosition=new Vector3(0,-height,1);
            other.gameObject.GetComponent<CollCube>().doColl();
            Debug.Log(height);
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
    public void Fallow(){
        //Tower.gameObject.transform.GetChild(height-1).DOMove(new Vector3(mainCube.transform.position.x, mainCube.transform.position.y+height, mainCube.transform.position.z), 0.15f*height).SetLoops(-1);

        if(height==1){
            Tower.gameObject.transform.GetChild(height-1).DOMove(new Vector3(mainCube.transform.position.x, mainCube.transform.position.y+height, mainCube.transform.position.z), 0.15f).SetLoops(-1).ChangeEndValue(new Vector3(mainCube.transform.position.x, mainCube.transform.position.y+height, mainCube.transform.position.z));
        }
        else{
            Tower.gameObject.transform.GetChild(height-1).DOMove(new Vector3(mainCube.transform.position.x, mainCube.transform.position.y+height, mainCube.transform.position.z), 0.15f*height).SetLoops(-1).ChangeEndValue(new Vector3(mainCube.transform.position.x, mainCube.transform.position.y+height, mainCube.transform.position.z));
        }    
    }
}




// using System.Collections;
// using System.Collections.Generic;
// using UnityEngine;
// using UnityEngine.SceneManagement;
// using System;
// using DG.Tweening;

// public class collector : MonoBehaviour
// {
//     GameObject mainCube;
//     public GameObject pickupEffect;
//     public GameManager gameManager;
//     int height=1;
//     public Vector3 targetAngle = new Vector3(0f, 360f, 0f);
//     public List<GameObject> tower;
//     void Start()
//     {
//         tower = new List<GameObject>();
//         mainCube=GameObject.Find("MainBox");
//         this.transform.localPosition=new Vector3(0,0,1);
//         tower[0]=mainCube.gameObject;
//     }

//     // Update is called once per frame
//     void Update()
//     {   
//         if(Input.GetKeyDown(KeyCode.RightControl) || Input.GetKeyDown(KeyCode.R)){
//              Scene scene = SceneManager.GetActiveScene();
//              SceneManager.LoadScene(scene.name);
//         }
//         if(Input.GetKeyDown(KeyCode.Escape)){
//             SceneManager.LoadScene("Menu");
//         }
//         /* mainCube.transform.position=new Vector3(transform.position.x, height+1, transform.position.z);
//         this.transform.localPosition=new Vector3(0,-height,0); */
//     }
//     public void decreeseHeight(){
//         height--;
//         //mainCube.transform.position=new Vector3(transform.position.x, height+1, transform.position.z);
//         this.transform.localPosition=new Vector3(0,-height,1);
//     }


//     void OnCollisionEnter(Collision other){
//         if (other.gameObject.tag=="END"){            
//             Scene scene = SceneManager.GetActiveScene();
//             SceneManager.LoadScene("Credits");
//             PlayerPrefs.GetInt("failed", 0);
//             Debug.Log("hit to end");
//         }
//         if (other.gameObject.tag == "aaa" && other.gameObject.GetComponent<CollCube>().getCollEd()==false){
//             Debug.Log("hit to box");
//             Debug.Log("height:" + height);
//             if(height<2)
//             {
//                 other.gameObject.transform.parent=mainCube.transform;
//                 other.transform.position=mainCube.transform.position + new Vector3(0,height,0);
//                 height=height+1;
//                 //this.transform.localPosition=new Vector3(0,-height,1);
//             }
//             else{
//                 //tower[height]=other.gameObject;
//                 gameManager.multierPlus();
//                 FindObjectOfType<AudioManager>().Play("collect");
                
//                 Instantiate(pickupEffect,transform.position, rotation: Quaternion.Euler(targetAngle));
                
//                 //mainCube.transform.position=new Vector3(mainCube.transform.position.x, height+1, mainCube.transform.position.z);
//                 //other.gameObject.transform.parent=mainCube.transform;
//                 Debug.Log(height);
//                 other.transform.DOJump(mainCube.transform.position + new Vector3(0,height,0) , 0.4f , 1 , 0.2f);
//                 //tower[height]=other.gameObject;
//                 //tower[height-2].gameObject.GetComponent<HingeJoint>().connectedBody=other.rigidbody;
//                 //tower[height-2].gameObject.GetComponent<HingeJoint>().connectedAnchor=
//                 //other.transform.position=mainCube.transform.position + new Vector3(0,height,0);
//                 //this.transform.localPosition=new Vector3(0,-height,1);
                
                
                

//                 other.gameObject.GetComponent<CollCube>().doColl();
//                 height=height+1;

//                 //other.gameObject.GetComponent<CollCube>().setIndex(height);
//                 //ÖNEMLİother.transform.localPosition=new Vector3(0,other.transform.position.y,0);
//                 //other.gameObject.GetComponent<BoxCollider>().isTrigger=false;
//                 /* if(height==1)
//                 other.transform.localPosition=new Vector3(0,-1,0);
//                 else{
                    
//                 other.transform.localPosition=new Vector3(0,other.transform.localPosition.y-1,0);
//                 } */
//             }
//         }
//     }
// }
