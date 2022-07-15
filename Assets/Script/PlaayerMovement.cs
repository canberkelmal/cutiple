using UnityEngine;

public class PlaayerMovement : MonoBehaviour
{
    public bool TestMode;
    public float forwardV;
    public float horizV;


    /*public Rigidbody rb;
    public float force=500f;
    public GameObject player;*/

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Hello World!");
        forwardV=PlayerPrefs.GetFloat("forwardForce");
        horizV=PlayerPrefs.GetFloat("horizontalForce");
        //rb.useGravity=true;

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        float horizontal=Input.GetAxis("Horizontal")*horizV*Time.deltaTime;
        float vertical=Input.GetAxis("Vertical")*forwardV*Time.deltaTime;
        if(TestMode==true){
            this.transform.Translate(horizontal, 0 ,  vertical);
            if(this.transform.position.z<5 && this.transform.position.z>-5)
                this.transform.Translate(horizontal, 0 , /* vertical */ 0 );
        }
        else if(TestMode==false){
            this.transform.Translate(horizontal, 0 , forwardV * Time.deltaTime);
            if(this.transform.position.z<5 && this.transform.position.z>-5)
                this.transform.Translate(horizontal,0 ,0 );
        }

        /*rb.AddForce(0,0,forwardForce*Time.deltaTime);

        if (Input.GetKey("w")){        
            rb.AddForce(force*Time.deltaTime, 0, 0, ForceMode.VelocityChange);
        };
        if (Input.GetKey("s"))
        {
            rb.AddForce(-force*Time.deltaTime, 0, 0, ForceMode.VelocityChange);
        };
        if (Input.GetKey("a"))
        {
            rb.AddForce(0, 0, force * Time.deltaTime, ForceMode.VelocityChange);
        };
        if (Input.GetKey("d"))
        {
            rb.AddForce(0, 0, -force * Time.deltaTime, ForceMode.VelocityChange);
        };
         if (Input.GetKey("space"))
        {
            rb.AddForce(0, force * Time.deltaTime, 0, ForceMode.VelocityChange);
        };*/
        

    }
}
