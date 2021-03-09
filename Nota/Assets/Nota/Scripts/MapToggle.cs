using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MapToggle : MonoBehaviour

{
    public GameObject PlacenoteManager;
    public GameObject map;

    public void ToggleMap()
    {
        PlacenoteManager.SetActive(false);
        map.SetActive(true);

    }

    public void ToggleOffMap()
    {

        map.SetActive(false);
        PlacenoteManager.SetActive(true);
    }

}
