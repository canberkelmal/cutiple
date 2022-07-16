using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class overCollider : MonoBehaviour
{
    void OnCollisionEnter(Collision other){
        if (other.gameObject.tag=="set"){            
            Scene scene = SceneManager.GetActiveScene();
            SceneManager.LoadScene("Credits");
            Debug.Log("Oopss!");
            PlayerPrefs.SetInt("failed", 1);
        }
    }
}
