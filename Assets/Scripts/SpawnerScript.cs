using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnerScript : MonoBehaviour
{
    public GameObject spawnObject;

    public GameObject characterPrefab;
    public Transform characterTransform;
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
        {
            SpawnCharacter();
            this.transform.GetComponent<FAtiMAWebServerScenarioManager>().StartScenario();
        }
    }


    
    public void SpawnDog()
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
            var obj = Instantiate(characterPrefab);
            obj.transform.position = position;
            obj.transform.Translate(new Vector3(0.0f, -0.1f, 0.0f));
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
            this.characterTransform = obj.transform;
            this.transform.GetComponent<FAtiMAWebServerScenarioManager>().SpawnedNPC();
        }
    }

    public void SpawnNotebook()
    {
            spawnedBook.transform.GetComponent<Rigidbody>().velocity = Vector3.zero;
        spawnedBook.transform.position = notebookSpawner.position + new Vector3(0.0f, 0.03f, 0.0f);
    }


    public void IncreaseNPCHeight()
    {
        if (characterTransform != null)
        {
            characterTransform.position += new Vector3(0.0f, 0.1f, 0.0f);
        }
    }

    public void DecreaseNPCHeight()
    {
        if (characterTransform != null)
        {
            characterTransform.transform.position -= new Vector3(0.0f, 0.1f, 0.0f);
        }
    }

    public void RotateLeft()
    {
        if (characterTransform != null)
        {
            characterTransform.Rotate(0.0f, 4.0f, 0.0f);
        }
    }
    public void RotateRight()
    {
        if (characterTransform != null)
        {
            characterTransform.Rotate(0.0f, -4.0f, 0.0f);
        }
    }


}
