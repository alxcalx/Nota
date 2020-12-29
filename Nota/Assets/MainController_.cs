using System.Collections;
using System.Collections.Generic;
using Telegram.Auth;
using Telegram.Core;
using Telegram.Phone;
using UnityEngine;

public class MainController_ : MonoBehaviour
{

    [SerializeField] private PhoneController _phoneController;


    private IEnumerator Start()
    {
      //  LoadingPanel.Instance.LoadingStart(ELoading.Load);

        yield return new WaitForSeconds(0.1f);
        yield return StartCoroutine(InitAsync());

    //    LoadingPanel.Instance.LoadingStop();
    }

    private IEnumerator InitAsync()
    {
        
        yield return StartCoroutine(PhoneManager.Instance.InitAuthAsync());

        Init();

        _phoneController.Init();
        _phoneController.OnClickDone += PhoneControllerOnClickDone;

    }

    private void Init()
    {

        FirebaseCore.Init();
    }


    private void PhoneControllerOnClickDone()
    {
        _phoneController.EnableModule(false);
        
    }




}

