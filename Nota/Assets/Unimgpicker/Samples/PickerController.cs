using System.Collections;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;

namespace Kakera
{
    public class PickerController : MonoBehaviour
    {
        [SerializeField]
        private Unimgpicker imagePicker;

        [SerializeField]
        private RawImage imageRenderer;

        private int[] sizes = {1024, 256, 16};

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

            var texture = ((DownloadHandlerTexture)unityWebRequestTexture.downloadHandler).texture;
            if (texture == null)
            {
                Debug.LogError("Failed to load texture url:" + url);
            }

            imageRenderer.texture = texture;
        }
    }
}