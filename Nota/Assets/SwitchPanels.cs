using System.Collections;
using System.Collections.Generic;
using Telegram.Auth;
using UnityEngine;

public class SwitchPanels : MonoBehaviour
{
    public GameObject PhoneNumberPanel;
    public GameObject VerifyCodePanel;
    public GameObject CrtAccountPanel;
    public GameObject InitPanel;
    public GameObject LabelPanel;
    public GameObject LoginandRegisterPanel;
    public GameObject RegisterPanel;
    public GameObject LoginPanel;





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
        InitPanel.SetActive(false);
        CrtAccountPanel.SetActive(true);
        

    }

    public void initPanel()
    {

        InitPanel.SetActive(true);
        LabelPanel.SetActive(true);
        CrtAccountPanel.SetActive(false);
        PhoneNumberPanel.SetActive(false);
        LoginandRegisterPanel.SetActive(false);
        RegisterPanel.SetActive(false);
        LoginPanel.SetActive(false);
    

    }

    public void loginandregisterPanel()
    {
        InitPanel.SetActive(false);
        LoginandRegisterPanel.SetActive(true);

    }

    public void registerPanel()
    {

        LoginandRegisterPanel.SetActive(false);
        RegisterPanel.SetActive(true);
    }

    public void loginPanel()
    {
        LoginandRegisterPanel.SetActive(false);
        LoginPanel.SetActive(true);

    }


    public void ProfileImageButton()
    {


        if (PhoneManager.Instance.Auth.CurrentUser != null)
        {

            crtAccountPanel();

            Debug.Log("A user is logged in");

        }
        else
        {
            loginandregisterPanel();

        }



    }

}
