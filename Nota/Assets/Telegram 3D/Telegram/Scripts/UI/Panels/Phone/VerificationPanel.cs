using System;
using UnityEngine;
using UnityEngine.UI;
using Michsky.UI.ModernUIPack;

namespace Telegram.Phone
{
    public class VerificationPanel : MonoBehaviour
    {
        [Header("Components")]
     //   [SerializeField] private Image _navBackground;
        [SerializeField] private Image _iconBtnPrev;
        [SerializeField] private Image _iconBtnNext;
        [SerializeField] private Button _btnPrev;
        [SerializeField] private Button _btnNext;
     //   [SerializeField] private Text _txtHeader;
    //   [SerializeField] private Text _txtDescription;
        [SerializeField] private CustomInputField _inputFieldCode;
        [SerializeField] private Button _btnResend;
        [SerializeField] private Text _txtTimer;
        [SerializeField] private Text _txtTimerDescription;

        public event Action<int> OnClickPrev;
        public event Action<string> OnClickNext;
        public event Action OnClickResend;

        private bool _timer = false;
        private float _totalTime = 120f;

        private void Start()
        {
            _btnPrev.onClick.AddListener(() => { OnClickPrev?.Invoke(0); });
            _btnNext.onClick.AddListener(() => { OnClickNext?.Invoke(_inputFieldCode.inputText.text); });
            _btnResend.onClick.AddListener(() => { OnClickResend?.Invoke(); });
        }

        private void Update()
        {
            if (!_timer) return;
            _totalTime -= Time.deltaTime;
            UpdateLevelTimer(_totalTime);
        }


       

        public void InitTimer()
        {
            _btnResend.interactable = false;
            _txtTimerDescription.gameObject.SetActive(true);
            _txtTimer.gameObject.SetActive(true);

            _totalTime = 120f;
            _timer = true;
        }

        private void UpdateLevelTimer(float totalSeconds)
        {
            var minutes = Mathf.FloorToInt(totalSeconds / 60f);
            var seconds = Mathf.RoundToInt(totalSeconds % 60f);

            if (seconds == 60)
            {
                seconds = 0;
                minutes += 1;
            }

            _txtTimer.text = minutes.ToString("00") + ":" + seconds.ToString("00");

            if (minutes == 0 && seconds == 0)
            {
                _btnResend.interactable = true;
                _txtTimerDescription.gameObject.SetActive(false);
                _txtTimer.gameObject.SetActive(false);
                _timer = false;
            }
        }

        public void EnableNextButton(bool value)
        {
            _btnNext.interactable = value;
        }

     
    }
}