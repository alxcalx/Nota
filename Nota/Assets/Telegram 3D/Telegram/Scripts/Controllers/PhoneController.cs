using System;
using System.Linq;
using Telegram.Auth;
using Telegram.Data;
using Telegram.Error;
using UnityEngine;
using UnityEngine.UI.Extensions;

namespace Telegram.Phone
{
    public class PhoneController : MonoBehaviour
    {
        [Header("Basic")]
        [SerializeField] private GameObject _root;
        [SerializeField] private GameObject initPanel;

        [Header("Panels")]
       // [SerializeField] private GameObject phoneAuth;
        [SerializeField] private HorizontalScrollSnap _horizontalScrollSnap;
        [SerializeField] private PhoneNumberPanel _phoneNumberPanel;
        [SerializeField] private VerificationPanel _verificationPanel;
        [SerializeField] private Profile _profilePanel;
        [SerializeField] private CountryPanel _countryPanel;
        [SerializeField] private ErrorPanel _errorPanel;
        [SerializeField] private GameObject CreateAccountPanel; 

        public event Action OnClickDone;

        public void Init()
        {
          //  _phoneNumberPanel.Init();
            _phoneNumberPanel.OnClickCountry += PhoneNumberPanelOnClickCountry;
            _phoneNumberPanel.OnClickNext += GoToScreen;

       //     _verificationPanel.Init();
       //      _verificationPanel.OnClickNext += VerificationPanelOnClick;
       //     _verificationPanel.OnClickPrev += GoToScreen;
       //     _verificationPanel.OnClickResend += VerificationPanelOnClickResend;

            //    _profilePanel.Init();
         //   _profilePanel.OnClickProfileImage += GoToScreen;

            _countryPanel.Init();
            _countryPanel.OnClick += CountryPanelOnClick;
            _countryPanel.OnClickPrev += CountryPanelOnClickPrev;

            PhoneManager.Instance.OnCodeSent += InstanceOnCodeSent;
            PhoneManager.Instance.OnUserNode += InstanceOnUserNode;
            
        }

        private void PhoneNumberPanelOnClickCountry()
        {
            var data = LocalCore.GetDataFromJsonFromPath<CountryModel>("CountryCode", "CountryCode").ToList();

            _countryPanel.gameObject.SetActive(true);
            _countryPanel.InitData(data);
            _countryPanel.Init(data);
        }

        public void GoToScreen(int indexPage)
        {
            Debug.Log("Go to screen function is called");
            initPanel.SetActive(false);
            _root.SetActive(true);

           
            

            if (_root.activeSelf)
            {
                _horizontalScrollSnap.GoToScreen(indexPage);
              var phoneNumber = _phoneNumberPanel.GetPhoneNumber();

                if (indexPage == 0)
                {

                }
                else if (indexPage == 1)
                {
                 //     _verificationPanel.Initialize(phoneNumber);
                 //   _verificationPanel.InitTimer();
               //    PhoneManager.Instance.VerifyPhoneNumber(phoneNumber);
                }
                else if (indexPage == 2)
                {
                 //    _profilePanel.Initialize(phoneNumber);
                }

            }
        }


/*
        private void VerificationPanelOnClick(string code)
        {
            PhoneManager.Instance.VerifyCode(code, (error, text) =>
            {
                if (error)
                {
                    Debug.Log("VerificationPanelOnClick Error");

                    _errorPanel.gameObject.SetActive(true);
                    _errorPanel.Initialize(text);
                }
                else
                {
                    Debug.Log("VerificationPanelOnClick Screen 2");
                    _root.SetActive(false);
                    initPanel.SetActive(true);
                }
            }); 
        }

        */

    


        private void InstanceOnUserNode(UserModel data)
        {
            Debug.Log("Calling Instance User node");
            _horizontalScrollSnap.GoToScreen(2);
          //  _profilePanel.Initialize(data.PhoneNumber, data.UserName, data.PhotoUrl);
        }

        private void InstanceOnCodeSent()
        {
            _verificationPanel.EnableNextButton(true);
        }

        private void VerificationPanelOnClickResend()
        {
            _verificationPanel.InitTimer();
        }

        private void CountryPanelOnClick(string diallingCode, string countryName)
        {
            _countryPanel.gameObject.SetActive(false);
            _phoneNumberPanel.gameObject.SetActive(true);
            _phoneNumberPanel.Initialize(diallingCode, countryName);
        }

        private void CountryPanelOnClickPrev()
        {
            _countryPanel.gameObject.SetActive(false);
            _phoneNumberPanel.gameObject.SetActive(true);
        }

        private void ProfilePanelOnClickDone()
        {
            OnClickDone?.Invoke();
        }

        public void EnableModule(bool value)
        {
            _root.SetActive(value);
        }
    }
}