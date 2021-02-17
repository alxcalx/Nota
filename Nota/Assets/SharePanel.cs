using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Michsky.UI.ModernUIPack;
using Telegram.Core;

public class SharePanel : MonoBehaviour
{
    public GameObject[] sharepanel;
    
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void ShareButton()
    {

        foreach(GameObject custominputfield in sharepanel)
        {
            FirebaseCore.AddInvites(custominputfield.GetComponentInParent<CustomInputField>().inputText.text);

        }

    }
}
