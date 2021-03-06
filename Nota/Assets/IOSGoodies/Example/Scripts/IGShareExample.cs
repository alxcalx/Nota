namespace DeadMosquito.IosGoodies.Example
{
	using JetBrains.Annotations;
	using UnityEngine;

	public class IGShareExample : MonoBehaviour
	{
		const string Message = "iOS Native Goodies by Dead Mosquito Games http://u3d.as/zMp #AssetStore";
		const string Subject = "The Subject";
		Texture2D _image;

		Texture2D Image
		{
			get
			{
				if (_image == null)
				{
					_image = Resources.Load<Texture2D>("icon");
				}
				return _image;
			}
		}

		void Awake()
		{
			// test getting instance
			Debug.Log(Image);
		}

#if UNITY_IOS && !DISABLE_SOCIAL_SHARE

		[UsedImplicitly]
		public void OnShareOnlyText()
		{
			var screenPosition = Vector2.zero; // On iPads ONLY you can choose screen position of popover
			IGShare.Share(
				activityType =>
				{
					if (string.IsNullOrEmpty(activityType))
					{
						Debug.Log("Posting was canceled or unknown result");
					}
					else
					{
						Debug.Log("DONE sharing, activity: " + activityType);
					}
				},
				error => Debug.LogError("Error happened when sharing activity: " + error),
				Message, null, screenPosition);
		}

		[UsedImplicitly]
		public void OnShareTextWithLink()
		{
			var iosGoodiesAreGreat = "iOS Goodies are great!";
			var dmgLink = "http://bit.ly/dmg-asset-store";
			var screenPosition = new Vector2(Screen.width, Screen.height);  // On iPads ONLY you can choose screen position of popover
			IGShare.ShareTextWithLink(activityType =>
				{
					if (string.IsNullOrEmpty(activityType))
					{
						Debug.Log("Posting was canceled or unknown result");
					}
					else
					{
						Debug.Log("DONE sharing, activity: " + activityType);
					}
				},
				error => Debug.LogError("Error happened when sharing activity: " + error),
				iosGoodiesAreGreat, dmgLink, screenPosition);
		}

		[UsedImplicitly]
		public void OnShareTextWithImage()
		{
			var screenPosition = new Vector2(Screen.width / 2, Screen.height / 2);
			IGShare.Share(
				activityType =>
				{
					if (string.IsNullOrEmpty(activityType))
					{
						Debug.Log("Posting was canceled or unknown result");
					}
					else
					{
						Debug.Log("DONE sharing, activity: " + activityType);
					}
				},
				error => Debug.LogError("Error happened when sharing activity: " + error),
				Message, Image, screenPosition);
		}

		[UsedImplicitly]
		public void OnSendSms()
		{
			IGShare.SendSmsViaDefaultApp("123456789", "My message!");
		}

		[UsedImplicitly]
		public void OnSendSmsEmbedded()
		{
			IGShare.SendSmsViaController("123456789", "Hello worksadk wa dwad !!!", () => Debug.Log("Success"),
				() => Debug.Log("Cancel"), () => Debug.Log("Failure"));
		}

		[UsedImplicitly]
		public void OnSendEmail()
		{
			var ccRecipients = new[] {"cc@gmail.com"};
			var bccRecipients = new[] {"bcc@gmail.com", "bcc-guys@gmail.com"};
			var recipients = new[] {"x@gmail.com", "hello@gmail.com"};
			IGShare.SendEmail(recipients, Subject, Message, ccRecipients, bccRecipients);
		}

		[UsedImplicitly]
		public void OnSendEmailEmbedded()
		{
			var ccRecipients = new[] {"cc@gmail.com"};
			var bccRecipients = new[] {"bcc@gmail.com", "bcc-guys@gmail.com"};
			var recipients = new[] {"x@gmail.com", "hello@gmail.com"};
			
			IGShare.SendEmailViaController(recipients, ccRecipients, bccRecipients, Subject, Message,
				() => {Debug.Log("Success");}, () => {Debug.Log("Cancelled");}, 
				() => {Debug.Log("Failure");}, () => {Debug.Log("Saved as draft");}, Image);
		}
#endif
	}
}