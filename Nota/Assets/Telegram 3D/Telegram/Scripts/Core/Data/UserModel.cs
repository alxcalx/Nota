using System;
using System.Collections.Generic;

namespace Telegram.Data
{
    public class UserModel
    {
       // public string Uid;
        public  string Name;
        public  string UserName;
        public  string PhoneNumber;
        public  string PhotoUrl;

        public UserModel(string name, string userName, string phoneNumber,  string photoUrl)
        {
            this.Name = name;
            this.UserName = userName;
            this.PhoneNumber = phoneNumber;
            this.PhotoUrl = photoUrl;
        }


        public UserModel(IDictionary<string, object> dict)
        {
            this.Name = dict["Name"].ToString();
            this.UserName = dict["UserName"].ToString();
            this.PhoneNumber = dict["PhoneNumber"].ToString();
            this.PhotoUrl = dict["PhotoUrl"].ToString();
        }

        
    }
}