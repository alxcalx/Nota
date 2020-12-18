using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchPanels : MonoBehaviour
{
    public GameObject PhoneNumberPanel;
    public GameObject VerifyCodePanel;
    public GameObject CrtAccountPanel;





    public void phoneNumberPanel()
    {
        PhoneNumberPanel.SetActive(true);
        VerifyCodePanel.SetActive(false);
        CrtAccountPanel.SetActive(false);


    }


    public void verifyCodePanel()
    {
        VerifyCodePanel.SetActive(true);
        PhoneNumberPanel.SetActive(false);
        CrtAccountPanel.SetActive(false);


    }

    public void crtAccountPanel()
    {
        CrtAccountPanel.SetActive(true);
        PhoneNumberPanel.SetActive(false);
        CrtAccountPanel.SetActive(false);

    }
}
