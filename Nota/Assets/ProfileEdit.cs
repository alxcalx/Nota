using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Michsky.UI.ModernUIPack;
using Telegram.Core;
using Telegram.Auth;
using Kakera;



public class ProfileEdit : MonoBehaviour
{

    public CustomInputField username;
    public CustomInputField phoneNumber;
    public CustomInputField fullname;
    public RawImage profile_image;
    SwitchPanels switchPanels;


    // Start is called before the first frame update
    void Start()
    {
        StartCoroutine(setImage(PickerController.download_url));

        //Replace inputfield text the with the phonenumber of the current user
        phoneNumber.inputText.text = PhoneManager.Instance.Auth.CurrentUser.PhoneNumber;

    }

    IEnumerator setImage(string url)
    {
        Texture2D texture = profile_image.canvasRenderer.GetMaterial().mainTexture as Texture2D;

        WWW www = new WWW(url);
        yield return www;

        // calling this function with StartCoroutine solves the problem
        Debug.Log("Why on earh is this never called?");

        www.LoadImageIntoTexture(texture);
        www.Dispose();
        www = null;
    }



    public void CreateProfile()
    {
        //Update Username within the database
        FirebaseCore.UpdateUserNameAsync(username.inputText.text);

        //Update the photo url within the database
        FirebaseCore.UpdatePrfofilePicAsync(PickerController.download_url);

        FirebaseCore.UpdateProfileNameAsync(fullname.inputText.text);

        
        switchPanels.initPanel();


    }
}