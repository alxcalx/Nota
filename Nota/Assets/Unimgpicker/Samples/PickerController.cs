using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using Telegram.Auth;
using Firebase.Storage;
using System;
using UnityEngine.Events;
using System.Threading.Tasks;

namespace Kakera
{
    public class PickerController : MonoBehaviour
    {

        // Get a reference to the storage service, using the default Firebase App


        [SerializeField]
        private Unimgpicker imagePicker;

        [SerializeField]
        private RawImage imageRenderer;

        Texture2D texture;
        public static string download_url;

        private int[] sizes = { 1024, 256, 16 };

       


        void Awake()
        {
            imagePicker.Completed += (string path) =>
            {
                StartCoroutine(LoadImage(path));
            };
        }

        public void OnPressShowPicker()
        {
            imagePicker.Show("Select Image", "unimgpicker");
        }

        private IEnumerator LoadImage(string path)
        {
            var url = "file://" + path;
            var unityWebRequestTexture = UnityWebRequestTexture.GetTexture(url);
            yield return unityWebRequestTexture.SendWebRequest();

            texture = ((DownloadHandlerTexture)unityWebRequestTexture.downloadHandler).texture;
            if (texture == null)
            {
                Debug.LogError("Failed to load texture url:" + url);
            }

            imageRenderer.texture = texture;


            UploadProfilePicAsync();

        }

        //    public static 

        private void UploadProfilePicAsync()
        {
            FirebaseStorage storage = FirebaseStorage.DefaultInstance;
            StorageReference storage_ref = storage.GetReferenceFromUrl("gs://nota-5bcae.appspot.com");
            StorageReference profile_images = storage_ref.Child(PhoneManager.Instance.User.UserId);

            var uploadTask = profile_images.PutBytesAsync(texture.EncodeToPNG())
       .ContinueWith((Task<StorageMetadata> task) => {
           if (task.IsFaulted || task.IsCanceled)
           {
               Debug.Log(task.Exception.ToString());
               // Uh-oh, an error occurred!
           }
           else
           {
               // Metadata contains file metadata such as size, content-type, and download URL.
               Firebase.Storage.StorageMetadata metadata = task.Result;
               download_url = profile_images.GetDownloadUrlAsync().ToString();
               Debug.Log("Finished uploading...");
               Debug.Log("download url = " + download_url);
           }
       });

        }

            private void HandleException(FailureReason uploadFailed, AggregateException exception)
        {
            throw new NotImplementedException();
        }



        public enum FailureReason
        {
            None,
            SignInFailed,
            UploadFailed,
            NoDeathData
        }

        [Serializable]
        public class UploadGameDataFailedEvent : UnityEvent<FailureReason, Exception>
        {
        }

        [Serializable]
        public class UploadGameDataCompleteEvent : UnityEvent<StorageReference>
        {
        }
    }

}
   