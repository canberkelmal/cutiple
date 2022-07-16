using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class setMovement : MonoBehaviour
{
    public float speed=0.250f;
    public int direction=1;
    // Start is called before the first frame update
    

    // Update is called once per frame
    void FixedUpdate()
    {
        if(direction==1){
            Vector3 desiredPosition = new Vector3(transform.position.x , transform.position.y , 20);
            Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, speed * Time.deltaTime);
            transform.position=smoothedPosition;
            if(transform.position.z>2.99)
            direction=2;            
        }
        if(direction==2){            
            Vector3 desiredPosition2 = new Vector3(transform.position.x , transform.position.y , -20);
            Vector3 smoothedPosition2 = Vector3.Lerp(transform.position, desiredPosition2, speed* Time.deltaTime);
            transform.position=smoothedPosition2;
            if(transform.position.z<-2.99)
            direction=1;             
        }
    }

    
}
