using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Shake : MonoBehaviour
{
    private bool shaking = false;
    // Start is called before the first frame update

    [SerializeField]
    private float shakeAmt;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (shaking)
        {
            Vector3 newPos = Random.insideUnitSphere * (Time.deltaTime * shakeAmt);
            newPos.y = transform.position.y;
            newPos.z = transform.position.z;

            transform.position = newPos;

        }


    }

    public void ShakeMe()
    {
        StartCoroutine("ShakeNow");
    }

    IEnumerator ShakeNow()
    {

        Vector3 originalPos = transform.position;

        if(shaking == false)
        {
            shaking = true;

        }

        yield return new WaitForSeconds(.25f);

        shaking = false;
        transform.position = originalPos;

    }
}
