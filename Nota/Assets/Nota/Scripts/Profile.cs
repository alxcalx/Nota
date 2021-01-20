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
        
            reference = FirebaseDatabase.DefaultInstance.RootReference;

        if (PhoneManager.Instance.User.UserId != null)
        {
            reference.Child(PhoneManager.Instance.Auth.CurrentUser.UserId).Child("photo_url").ValueChanged += HandleValueChanged;

            LoadImage(photo_url);

        }
    }

 

    void HandleValueChanged(object sender, ValueChangedEventArgs args)
    {
        if (args.DatabaseError != null)
        {
            Debug.LogError(args.DatabaseError.Message);
            return;
        }

        photo_url = args.Snapshot.ToString();
        
    }
    private IEnumerator LoadImage(string path)
    {
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
