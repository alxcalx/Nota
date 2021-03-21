using System;
using System.Collections.Generic;

namespace Nota.Data
{
    public class MapInfo
    {
     //   public string Author;
        public string SetName;
        public string Latitude;
        public string Longtitude;
        public string Altitude;
        public string Timecreated;
     //   public readonly string PlaceId;
        public string RefencePointPhotoUrl;

        public MapInfo(/*string author,*/ string setname , string latitude, string longtitude, string altitude, string timecreated, /*string placeId,*/ string referencephotourl)
        {
         //   this.Author = author;
            this.SetName = setname;
            this.Latitude = latitude;
            this.Longtitude = longtitude;
            this.Altitude = altitude;
            this.Timecreated = timecreated;
       //     this.PlaceId = placeId;
            this.RefencePointPhotoUrl = referencephotourl;

        }

        public MapInfo(IDictionary<string, object> dict)
        {
       //     this.Author = dict["author"].ToString();
            this.SetName = dict["name"].ToString();
            this.Latitude = dict["latitude"].ToString();
            this.Longtitude = dict["longtitude"].ToString();
            this.Altitude = dict["altitude"].ToString();
            this.Timecreated = dict["time_created"].ToString();
        //    this.PlaceId = dict["place_id"].ToString();
            this.RefencePointPhotoUrl = dict["referencephoto_url"].ToString();
        }
    }

}