using System;
using System.Collections.Generic;

namespace Nota.Data
{
    public class User
    {
        public string Uid;
        public readonly string UserName;
        public readonly string PhoneNumber;
        public readonly string PhotoUrl;
        public readonly string MapIdList;

        public User(string userName, string phoneNumber, string photoUrl, string mapIdList)
        {
            this.UserName = userName;
            this.PhoneNumber = phoneNumber;
            this.PhotoUrl = photoUrl;
            this.MapIdList = mapIdList;
        }

        public User(IDictionary<string, object> dict)
        {
            this.UserName = dict["user_name"].ToString();
            this.PhoneNumber = dict["phone_number"].ToString();
            this.PhotoUrl = dict["photo_url"].ToString();
            this.MapIdList = dict["map_Idlist"].ToString();
        }
    }

}