using System;
using System.Collections.Generic;

namespace Telegram.Data
{
    public class UserModel
    {
       // public string Uid;
      //  public readonly string Name;
        public  string UserName;
        public  string PhoneNumber;
        public  string PhotoUrl;

        public UserModel(/*string name,*/ string userName, string phoneNumber,  string photoUrl)
        {
        //    this.Name = name;
            this.UserName = userName;
            this.PhoneNumber = phoneNumber;
            this.PhotoUrl = photoUrl;
        }

        public UserModel(IDictionary<string, object> dict)
        {
        //    this.Name = dict["full_name"].ToString();
            this.UserName = dict["user_name"].ToString();
            this.PhoneNumber = dict["phone_number"].ToString();
            this.PhotoUrl = dict["photo_url"].ToString();
        }
    }
}