using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Movement : MonoBehaviour
{
    public float frc;
    public static float forwardV;
    Vector2 offset;
    Vector3 startPos = Vector2.zero;
    Vector3 startPos2 = Vector2.zero;
    public static float smoothSpeed=0.1f;
    public float sens;
    bool loc;
    Vector3 pos;
    Vector3 smoothedPosition;
    Vector3 mousePos;
    public Rigidbody rb;
    public float force=-10f;
    public float maxVelocity=100f;
    float sqrMaxVelocity;

    
    

    void Start(){
        frc=PlayerPrefs.GetFloat("horizontalForce",7f);
        forwardV=PlayerPrefs.GetFloat("forwardForce",9f);
        smoothSpeed=PlayerPrefs.GetFloat("smoothSpeed",0.25f);
        rb=GetComponent<Rigidbody>();
        SetMaxVelocity(maxVelocity);
    }
    
    
    void Update (){
        Debug.Log(rb.velocity.magnitude);

        var v = rb.velocity;
        // Clamp the velocity, if necessary
        // Use sqrMagnitude instead of magnitude for performance reasons.
        if(v.sqrMagnitude > sqrMaxVelocity)
            rb.velocity = v.normalized * maxVelocity;
        
        // Equivalent to: rigidbody.velocity.magnitude > maxVelocity, but faster.
        // Vector3.normalized returns this vector with a magnitude 
        // of 1. This ensures that we're not messing with the 
        // direction of the vector, only its magnitude.
        
        

        mousePos=new Vector3(0, 0, Remap(Input.mousePosition.x, -sens+10, Screen.width+sens-10, -2.8f, 2.8f));
        if(Input.GetMouseButtonDown(0)){
            startPos = mousePos;
            startPos2 = transform.position;
        }

        if(Input.GetMouseButton(0)){

            

            
            //this.transform.Translate(0, 0 , forwardV * Time.deltaTime);
            rb.AddForce(force * Time.deltaTime, 0, 0, ForceMode.VelocityChange);
            Vector3 push= mousePos-startPos;
            
            if(mousePos.z<startPos.z&&transform.position.z>-2.8f){
                smoothedPosition = Vector3.Lerp(transform.position,startPos2+push , smoothSpeed);
                transform.position=new Vector3(this.transform.position.x,this.transform.position.y, smoothedPosition.z);
            }
            else if(mousePos.z>startPos.z&&transform.position.z<2.8f){
                smoothedPosition = Vector3.Lerp(transform.position,startPos2+push , smoothSpeed);
                transform.position=new Vector3(this.transform.position.x,this.transform.position.y, smoothedPosition.z);
            }
            
            
        }
        
     






        
        /* foreach(Touch t in Input.touches){
            if(t.phase == TouchPhase.Began){
                initTouch = t;
            }
            else if(t.phase == TouchPhase.Moved){
                float xMoved = initTouch.position.x - t.position.x;
                //float yMoved = initTouch.position.y - t.position.y;
                //float distance = Mathf.Sqrt((xMoved * xMoved) + (yMoved * yMoved));
                bool swipedLeft = Mathf.Abs(xMoved) !=0;
                if(xMoved > 50f){
                    if (swipedLeft && xMoved > 0) // swiped left
                    {
                    this.transform.Translate(-frc, 0, 0);
                    }
                    else if(swipedLeft && xMoved < 0) // swped right
                    {
                    this.transform.Translate(-frc, 0, 0);
                    }
                    else if(swipedLeft = false && yMoved > 0)// swiped up
                    {
                    cube.transform.Translate(0, -5, 0);
                    }
                    else if(swipedLeft == false && yMoved < 0) // swiped down
                    {
                    cube.transform.Translate(0, 5, 0);
                    }  //FOR VERTICAL SWIPE
                }
            }
            else if(t.phase  == TouchPhase.Ended)
            { 
                initTouch = new Touch();
            }
        } */
    }

    public void SetMaxVelocity(float maxVelocity){
        this.maxVelocity = maxVelocity;
        sqrMaxVelocity = maxVelocity * maxVelocity;
    }

    public static float Remap (float value, float from1, float to1, float from2, float to2) {
        return (value - from1) / (to1 - from1) * (to2 - from2) + from2;
    }

}
    



