using UnityEngine;
using UnityEngine.UI;

public class PlaayerMovement : MonoBehaviour
{
    public bool TestMode;
    public float forwardV;
    public float horizV;
    public float sens;

    private Vector2 turn;
    float rotationX = 0f;
    public float sensitivityX = 15F;
    //public Text posText;


    /*public Rigidbody rb;
    public float force=500f;
    public GameObject player;*/

    // Start is called before the first frame update
    void Start()
    {
        Debug.Log("Hello World!");
        forwardV=PlayerPrefs.GetFloat("forwardForce",9);
        horizV=PlayerPrefs.GetFloat("horizontalForce",7);
        //rb.useGravity=true;

    }

    // Update is called once per frame
    void FixedUpdate()
    {
        
        Vector3 mousePos = Input.mousePosition;
        rotationX = Remap(mousePos.x, -sens+10, Screen.width+sens-10, -2.8f, 2.8f);
        float horizontal=Input.GetAxis("Horizontal")*horizV*Time.deltaTime;
        float vertical=Input.GetAxis("Vertical")*forwardV*Time.deltaTime;

        if(PlayerPrefs.GetInt("remote")==0){//MOUSE CONTROL
            if(TestMode) {
                this.transform.Translate(0, 0 ,  vertical);
                if(rotationX<3 && rotationX>-3)
                    this.transform.Translate(horizontal, 0 , /* vertical */ 0 );
            }
            else if(!TestMode){
                this.transform.Translate(0, 0 , forwardV * Time.deltaTime);
                if(rotationX<=3.1 && rotationX>=-3.1)
                    transform.position=new Vector3(this.transform.position.x,this.transform.position.y, rotationX);
            }
            //posText.text = mousePos.x.ToString() + " " + rotationX.ToString();
        }

        if(PlayerPrefs.GetInt("remote") == 1) {//KEYBOARD CONTROL
            if(TestMode==true){
            transform.Translate(0, 0 ,  vertical);
            if(transform.position.z<3 && this.transform.position.z>-3)
                this.transform.Translate(horizontal, 0 , /* vertical */ 0 );
        }
        else if(TestMode==false){
            this.transform.Translate(0, 0 , forwardV * Time.deltaTime);
            if(this.transform.position.z<3 && this.transform.position.z>-3)
                this.transform.Translate(horizontal,0 ,0 );
        }
        }

        /*!!!!!!
        if(TestMode==true){
            this.transform.Translate(horizontal, 0 ,  vertical);
            if(this.transform.position.z<3 && this.transform.position.z>-3)
                this.transform.Translate(horizontal, 0 , /* vertical *//* 0 );
        }
        else if(TestMode==false){
            this.transform.Translate(horizontal, 0 , forwardV * Time.deltaTime);
            if(this.transform.position.z<3 && this.transform.position.z>-3)
                this.transform.Translate(horizontal,0 ,0 );
        } !!!!!!*/

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

    public static float Remap (float value, float from1, float to1, float from2, float to2) {
        return (value - from1) / (to1 - from1) * (to2 - from2) + from2;
    }

}
