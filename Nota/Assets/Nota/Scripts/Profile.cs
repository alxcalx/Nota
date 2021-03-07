using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Telegram.Auth;
using Firebase.Auth;
using UnityEngine.UI;
using Firebase.Database;
using UnityEngine.Networking;
using System;
using Telegram.Phone;

public class Profile : MonoBehaviour
{
    [SerializeField] private Button _btnProfile;
  //  [SerializeField] private GameObject _root;

   
    DatabaseReference reference;
    public FirebaseUser User;
    public RawImage profileimage;
    public static string photo_url;
    Texture2D texture;

    //  PhoneController phoneController = new PhoneController();

    //  public event Action<int> OnClickProfileImage;

    // Start is called before the first frame update
    void Start()
    {
       

        StartCoroutine(LoadImage(PlayerPrefs.GetString("photo_url")));
        Debug.Log(PlayerPrefs.GetString("photo_url"));

        
    }





    private IEnumerator LoadImage(string path)
    {
        Debug.Log("Loading Image");
        var url =  path;
        var unityWebRequestTexture = UnityWebRequestTexture.GetTexture(url);
        yield return unityWebRequestTexture.SendWebRequest();

        texture = ((DownloadHandlerTexture)unityWebRequestTexture.downloadHandler).texture;
        if (texture == null)
        {
            Debug.LogError("Failed to load texture url:" + url);
        }

        profileimage.texture = texture;


        

    }





}
