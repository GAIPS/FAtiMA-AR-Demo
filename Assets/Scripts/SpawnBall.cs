using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnBall : MonoBehaviour
{
    // Start is called before the first frame update

    public GameObject ballPrefab;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void spawnBall()
    {
        Vector3 Position = new Vector3(transform.position.x, transform.position.y + 0.2f, transform.position.z);
        GameObject spanwedBall = Instantiate(ballPrefab, Position, transform.rotation);
    }
}
