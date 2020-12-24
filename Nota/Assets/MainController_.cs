using System.Collections;
using System.Collections.Generic;
using Telegram.Auth;
using Telegram.Core;
using UnityEngine;

public class MainController_ : MonoBehaviour
{
 

    
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


    }

    private void Init()
    {

        FirebaseCore.Init();
    }

    


}

