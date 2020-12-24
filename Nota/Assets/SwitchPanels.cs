using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SwitchPanels : MonoBehaviour
{
    public GameObject PhoneNumberPanel;
    public GameObject VerifyCodePanel;
    public GameObject CrtAccountPanel;
    public GameObject InitPanel;
    public GameObject LabelPanel;





    public void phoneNumberPanel()
    {
        PhoneNumberPanel.SetActive(true);
        VerifyCodePanel.SetActive(false);
        CrtAccountPanel.SetActive(false);
        InitPanel.SetActive(false);


    }


    public void verifyCodePanel()
    {
        VerifyCodePanel.SetActive(true);
        PhoneNumberPanel.SetActive(false);
        CrtAccountPanel.SetActive(false);
        InitPanel.SetActive(false);

    }

    public void crtAccountPanel()
    {
        CrtAccountPanel.SetActive(true);
        VerifyCodePanel.SetActive(false);
        PhoneNumberPanel.SetActive(false);
        CrtAccountPanel.SetActive(false);
        InitPanel.SetActive(false);

    }

    public void initPanel()
    {
        InitPanel.SetActive(true);
        LabelPanel.SetActive(true);
        CrtAccountPanel.SetActive(false);
        PhoneNumberPanel.SetActive(false);
        PhoneNumberPanel.SetActive(false);


    }
}
