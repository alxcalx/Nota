using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Telegram.Auth;
using Firebase.Auth;
using UnityEngine.UI;
using Firebase.Database;
using UnityEngine.Networking;
using System;

public class Profile : MonoBehaviour
{
    [SerializeField] private Button _btnProfile;

    FirebaseAuth auth;
    DatabaseReference reference;
    public FirebaseUser User;
    public RawImage profileimage;
    string photo_url;
    Texture2D texture;

    public event Action<int> OnClickProfileImage;

    // Start is called before the first frame update
    void Start()
    {
        auth = FirebaseAuth.DefaultInstance;
        reference = FirebaseDatabase.DefaultInstance.RootReference;


        if (auth.CurrentUser != User)
        {


            auth.SignInAnonymouslyAsync().ContinueWith(task =>
            {
                if (task.IsCanceled)
                {
                    Debug.LogError("SignInAnonymouslyAsync was canceled.");
                    return;
                }
                if (task.IsFaulted)
                {
                    Debug.LogError("SignInAnonymouslyAsync encountered an error: " + task.Exception);
                    return;
                }

                FirebaseUser newUser = task.Result;
                Debug.LogFormat("User signed in successfully: {0} ({1})",
                    newUser.DisplayName, newUser.UserId);
            });

        }
        else
        {

            _btnProfile.onClick.AddListener(() => { OnClickProfileImage?.Invoke(2); });

            reference.Child(auth.CurrentUser.UserId).Child("photo_url").ValueChanged += HandleValueChanged;

        }

        LoadImage(photo_url);

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
