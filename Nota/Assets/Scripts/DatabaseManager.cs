using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Firebase;
using Firebase.Database;
using Firebase.Unity.Editor;
using Nota.Data;


public class DatabaseManager : MonoBehaviour
{
    DatabaseReference reference = FirebaseDatabase.DefaultInstance.RootReference;


    private void writeNewUser(string userId, string name, string phonenum, string photourl, string mapidList)
    {
        User user = new User(name, phonenum, photourl, mapidList);
        string json = JsonUtility.ToJson(user);

        reference.Child("users").Child(userId).SetRawJsonValueAsync(json);

    }

    
}
