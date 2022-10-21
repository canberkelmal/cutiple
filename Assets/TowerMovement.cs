using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using DG.Tweening;

public class TowerMovement : MonoBehaviour
{
    public Transform MainBox;
    public float swing=30f;
    public float pow=0.05f;
    public Vector3 targetPos;
    public Vector3 targetPos2;

    void Update()
    {
        Debug.Log(Time.deltaTime);
        if(transform.childCount>0){
            for(int i=0;i<transform.childCount;i++){
                //targetPos=new Vector3(MainBox.transform.position.x,transform.position.y+i,MainBox.transform.position.z);
                //transform.GetChild(0).position=new Vector3(MainBox.transform.position.x, MainBox.transform.position.y+1, MainBox.transform.position.z);
                //transform.GetChild(i).DOMove(targetPos, swing*i);
                    transform.GetChild(0).transform.position=MainBox.transform.position + new Vector3(0,1,0);
                
                
                if(i==0){
                    //targetPos2 = Vector3.MoveTowards(MainBox.transform.position, MainBox.transform.position, 1);
                    targetPos = Vector3.MoveTowards(transform.GetChild(i).position, MainBox.transform.position, (swing/Mathf.Pow(i,pow))*Time.deltaTime);
                    //targetPos = Vector3.MoveTowards(transform.GetChild(i).position, transform.GetChild(i-1).position, (swing/Mathf.Pow(i,pow))*Time.deltaTime);
                    transform.GetChild(i).transform.position=new Vector3(MainBox.transform.position.x, MainBox.transform.position.y+1, targetPos.z);
                }
                else if(i>0){
                    targetPos = Vector3.MoveTowards(transform.GetChild(i).position, MainBox.transform.position, (swing/Mathf.Pow(i,pow))*Time.deltaTime);
                    //targetPos = Vector3.MoveTowards(transform.GetChild(i).position, transform.GetChild(i-1).position, (swing/Mathf.Pow(i,pow))*Time.deltaTime);
                    transform.GetChild(i).transform.position=new Vector3(MainBox.transform.position.x, transform.GetChild(i-1).position.y+1, targetPos.z);
                }
                
            }
        }
    } 
}
