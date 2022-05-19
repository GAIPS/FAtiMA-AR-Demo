using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnerScript : MonoBehaviour
{
    public GameObject spawnObject;

    public GameObject character;
    public Transform spawnCharacterLocation;

    public GameObject Notebook;
    public Transform notebookSpawner;
    private bool spawnedNotebook;
    private bool spawnedCharacter;
    private Transform spawnedBook;
    public bool spawnCharacterOnStart;

    void Start()
    {
        if (spawnCharacterOnStart)
            SpawnCharacter();
    }


    public void SpawnObject()
    {
        var obj = Instantiate(spawnObject, this.transform);
        obj.transform.position = this.transform.position;
    }

    public void SpawnCharacter()
    {
        if (!spawnedCharacter)
        {
           
            var position = this.spawnCharacterLocation.position;
            Destroy(spawnCharacterLocation.gameObject);
            position -= new Vector3(0.0f, -0.5f, 0.0f);
            var obj = Instantiate(character);
            obj.transform.position = position;
            //obj.transform.rotation
            obj.transform.rotation = Quaternion.identity;
            var lookatPosition = GameObject.FindGameObjectWithTag("MainCamera").transform.position;
            obj.transform.LookAt(lookatPosition);
            var properRotation = new Quaternion(0.0f, 0.0f, 0.0f, 0.0f);
           // properRotation.x = obj.transform.rotation.x;
            properRotation.y = obj.transform.rotation.y;
            properRotation.w = obj.transform.rotation.w;
            obj.transform.rotation = properRotation;
            spawnedCharacter = true;

            this.transform.GetComponent<FAtiMAWebServerScenarioManager>().SpawnedNPC();
        }
    }

    public void SpawnNotebook()
    {
            spawnedBook.transform.GetComponent<Rigidbody>().velocity = Vector3.zero;
        spawnedBook.transform.position = notebookSpawner.position + new Vector3(0.0f, 0.03f, 0.0f);
    }

}
