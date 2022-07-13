using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class setTurning : MonoBehaviour
{
    public float speed=0.250f;
    public Vector3 targetAngle = new Vector3(0f, 360f, 0f);
    // Start is called before the first frame update
    

    // Update is called once per frame
    void FixedUpdate()
    {
        transform.Rotate(targetAngle * speed * Time.deltaTime);
    }

    
}
