using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Recepients : MonoBehaviour
{
    public string phonenumbers;


    public Recepients()
    {


    }

    public Recepients(string phonenumbers)
    {
        this.phonenumbers = phonenumbers;


    }

    public Recepients(IDictionary<string,object> dict)
    {
        this.phonenumbers = dict["phonenumber"].ToString();
    }

}
