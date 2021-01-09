using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using Telegram.Auth;
using UnityEngine.Networking;
using Telegram.Core;

namespace StickyNotes
{
    public class NoteController : MonoBehaviour
    {
        // This is set to -1 when instantiated, and assigned when saving notes.
        [SerializeField] public int mIndex = -1;
        [SerializeField] public bool mActiveButtons = false;
        [SerializeField] public RawImage profileImage;
        [SerializeField] public Text fullname;
        Texture2D texture;


        public Button mEditButton;
        public Button mDeleteButton;



        private void Start()
        {
            if(PhoneManager.Instance.User.UserId != null)
            {

                LoadImage(Profile.photo_url);
                fullname.text = FirebaseCore.fullname;

                

            }
        }


        private IEnumerator LoadImage(string path)
        {
            var url = path;
            var unityWebRequestTexture = UnityWebRequestTexture.GetTexture(url);
            yield return unityWebRequestTexture.SendWebRequest();

            texture = ((DownloadHandlerTexture)unityWebRequestTexture.downloadHandler).texture;
            if (texture == null)
            {
                Debug.LogError("Failed to load texture url:" + url);
            }

            profileImage.texture = texture;




        }


    

    }


    
}
