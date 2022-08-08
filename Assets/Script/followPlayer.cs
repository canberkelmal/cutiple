using UnityEngine;

public class followPlayer : MonoBehaviour
{
    public Transform Player;
    public float smoothSpeed=0.250f;
    public Vector3 offset;

    // Update is called once per frame
    void FixedUpdate()
    {
        Vector3 desiredPosition = Player.position + offset;
        desiredPosition.y=10;
        Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed);
        transform.position=smoothedPosition;
        //transform.LookAt(Player);
    }
}
