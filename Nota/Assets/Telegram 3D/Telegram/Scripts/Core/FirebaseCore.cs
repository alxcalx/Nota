using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;
using Loading;
using Telegram.Auth;
using Telegram.Data;
using Michsky.UI.ModernUIPack;
using Nota.Data;
using Firebase.Storage;
using System.Threading.Tasks;

namespace Telegram.Core
{
    public class FirebaseCore
    {
        private static DatabaseReference BaseRef { get; set; }

    
        private static float _elapsedTime;

        public static List<string> placeids = new List<string>();
        public static string fullname;
        public static string download_url;
       
        public static void Init()
        {

            BaseRef = FirebaseDatabase.DefaultInstance.RootReference;

        }
      
        public static void CreateNewUser(UserModel userName, string uid)
        {
            
            var playerJson = JsonUtility.ToJson(userName);
            BaseRef.Child("users").Child(uid).SetRawJsonValueAsync(playerJson);
            Debug.Log("User json written to database");
        }


        public static IEnumerator GetPlayer(Action<bool, UserModel> cb)
        {
            _elapsedTime = 0;

            if (PhoneManager.Instance.User == null)
            {
                cb(true, null);
                yield break;
            }

            var task = BaseRef.Child("users").Child(PhoneManager.Instance.User.UserId).GetValueAsync();
            yield return new WaitWhile(() => IsTask(task.IsCompleted));

            if (!task.IsCompleted)
            {
                LoadingPanel.Instance.LoadingStop();

                cb(true, null);
                yield return null;
            }

            if (task.IsFaulted || task.IsCanceled)
            {
                LoadingPanel.Instance.LoadingStop();

                cb(true, null);
                yield break;
            }

            var player = task.Result;

            if (player == null)
            {
                LoadingPanel.Instance.LoadingStop();
                Debug.Log("player null");

                cb(true, null);
                yield break;
            }

            if (player.Value == null)
            {
                LoadingPanel.Instance.LoadingStop();
                Debug.Log("value null");

                cb(true, null);
                yield break;
            }

            var playerDict = (IDictionary<string, object>) player.Value;
            var userModel = new UserModel(playerDict);

            cb(false, userModel);
        }

       

        public static IEnumerator UpdateUserNameAsync(string userName)
        {
            LoadingPanel.Instance.LoadingStart(ELoading.Load);

            _elapsedTime = 0;

            if (PhoneManager.Instance.User == null)
            {
                LoadingPanel.Instance.LoadingStop();
                yield break;
            }

            var task = BaseRef.Child("users").Child(PhoneManager.Instance.User.UserId).Child("user_name").SetValueAsync(userName);
            yield return new WaitWhile(() => IsTask(task.IsCompleted));

            if (task.IsFaulted || task.IsCanceled)
            {
                LoadingPanel.Instance.LoadingStop();
                yield break;
            }

            LoadingPanel.Instance.LoadingStop();
        }


        public static IEnumerator UpdatePrfofilePicAsync(string photourl)
        {
            LoadingPanel.Instance.LoadingStart(ELoading.Load);

            _elapsedTime = 0;

            if (PhoneManager.Instance.User == null)
            {
                LoadingPanel.Instance.LoadingStop();
                yield break;
            }

            var task = BaseRef.Child("users").Child(PhoneManager.Instance.User.UserId).Child("photo_url").SetValueAsync(photourl);
            yield return new WaitWhile(() => IsTask(task.IsCompleted));

            if (task.IsFaulted || task.IsCanceled)
            {
                LoadingPanel.Instance.LoadingStop();
                yield break;
            }

            LoadingPanel.Instance.LoadingStop();
        }

        public static IEnumerator UpdateProfileNameAsync(string name)
        {
            LoadingPanel.Instance.LoadingStart(ELoading.Load);

            _elapsedTime = 0;

            if (PhoneManager.Instance.User == null)
            {
                LoadingPanel.Instance.LoadingStop();
                yield break;
            }

            var task = BaseRef.Child("users").Child(PhoneManager.Instance.User.UserId).Child("full_name").SetValueAsync(name);
            yield return new WaitWhile(() => IsTask(task.IsCompleted));

            if (task.IsFaulted || task.IsCanceled)
            {
                LoadingPanel.Instance.LoadingStop();
                yield break;
            }

            LoadingPanel.Instance.LoadingStop();
        }

        public static IEnumerator UpdateMapId(string placeid, string latitude_, string longtitude_, string altitude_, string timecreated_, string setname_)
        {
            var setname = setname_;
            var latitude = latitude_;
            var longtitude = longtitude_;
            var altitude = altitude_;
            var timecreated = timecreated_;
            var referencephotourl = download_url;


            var map = new MapInfo(setname, latitude, longtitude, altitude, timecreated, referencephotourl);
            var mapJson = JsonUtility.ToJson(map);
            var task = BaseRef.Child("users").Child(PhoneManager.Instance.User.UserId).Child("map_list").Child(placeid).SetRawJsonValueAsync(mapJson);
            yield return new WaitWhile(() => IsTask(task.IsCompleted));

            if (task.IsFaulted || task.IsCanceled)
            {
                LoadingPanel.Instance.LoadingStop();
                yield break;
            }

        }

        public static IEnumerator AddInvites(string phonenumber)
        {
            LibPlacenote.MapInfo mapInfo = new LibPlacenote.MapInfo();

            string key = BaseRef.Child("users").Child(PhoneManager.Instance.User.UserId).Child("map_list").Child(mapInfo.placeId).Child("Recepients").Push().Key;
            Recepients recepients = new Recepients(phonenumber);
   
            Dictionary<string, object> childUpdates = new Dictionary<string, object>();
            childUpdates["/Recepients/" + key] = recepients.ToString();
            var task = BaseRef.UpdateChildrenAsync(childUpdates);

            yield return new WaitWhile(() => IsTask(task.IsCompleted));

            if (task.IsFaulted || task.IsCanceled)
            {
                LoadingPanel.Instance.LoadingStop();
                yield break;
            }

        }

        public static void MapListRetrieval()
        {
            BaseRef.Child("users").Child(PhoneManager.Instance.User.UserId).Child("map_list").ValueChanged += (object sender2, ValueChangedEventArgs e2) =>
            {
                if(e2.DatabaseError != null)
                {
                    Debug.LogError(e2.DatabaseError.Message);
                }

                if(e2.Snapshot != null && e2.Snapshot.ChildrenCount > 0)
                {
                    foreach(var childSnapshot in e2.Snapshot.Children)
                    {
                        string placeid = childSnapshot.Value.ToString();
                        placeids.Add(placeid);

                        Debug.Log(placeid);

                    }

                }

            };


        }

        void NameRetrieval()
        {

            BaseRef.Child("users").Child(PhoneManager.Instance.User.UserId).Child("full_name").ValueChanged += (object sender2, ValueChangedEventArgs e2) =>
            {
                if (e2.DatabaseError != null)
                {
                    Debug.LogError(e2.DatabaseError.Message);
                }

                if (e2.Snapshot != null && e2.Snapshot.ChildrenCount > 0)
                {
                    fullname = e2.Snapshot.Value.ToString();

                }

            };


        }

        public static void UploadMapThumbnail(Texture2D texture)
        {
            FirebaseStorage storage = FirebaseStorage.DefaultInstance;
            StorageReference storage_ref = storage.GetReferenceFromUrl("gs://nota-5bcae.appspot.com");
            StorageReference profile_images = storage_ref.Child("Users").Child(PhoneManager.Instance.User.UserId).Child("ReferencePhoto");

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


        private static bool IsTask(bool value)
        {
            _elapsedTime += Time.deltaTime;

            if (value)
            {
                return false;
            }
            else
            {
                if (_elapsedTime > 10)
                {
                    return false;
                }
                else
                {
                    return true;
                }
            }
        }
    }
}
