using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MainController : MonoBehaviour {

    public GameObject FirstStartPanel;
    public GameObject ShopPanel;
    public GameObject LevelsPanel;
    public int FirstTime = 0;

    public void Start()
    {
        FirstTime = PlayerPrefs.GetInt("firsttime");
        if (FirstTime != 0)
        {
            Player.Money = PlayerPrefs.GetInt("money");
            Hero.MaxHp = PlayerPrefs.GetInt("maxhp");
            Hero.Damage = PlayerPrefs.GetInt("damage");
            Hero.Speed = PlayerPrefs.GetFloat("speed");
            Hero.FireRate = PlayerPrefs.GetFloat("firerate");
            Hero.JumpForce = PlayerPrefs.GetFloat("jumpforce");
            ButtonUpgrade.ChangeButtons(FindObjectOfType<Form>());
        }
        else
        {
            FirstTime = 1;
            Save();
        }
    }
    public void FirstStartBTN()
    {
        FirstStartPanel.SetActive(false);
        Player.FirstTime = false;
        FirstTime = 1;
        FindObjectOfType<PlayerInfo>().ChangeInfo();
        Save();
    }
    public void OpenShop()
    {
        ShopPanel.SetActive(!ShopPanel.activeSelf);
        LevelsPanel.SetActive(!ShopPanel.activeSelf);
        ButtonUpgrade.ChangeButtons(FindObjectOfType<Form>());
    }
    public void LoadLevel(int index)
    {
        SceneManager.LoadScene(1);
        GameController.index = index;
    }
    public void Save()
    {
        PlayerPrefs.SetInt("money", Player.Money);
        PlayerPrefs.SetInt("maxhp", Hero.MaxHp);
        PlayerPrefs.SetInt("damage", Hero.Damage);
        PlayerPrefs.SetFloat("speed", Hero.Speed);
        PlayerPrefs.SetFloat("firerate", Hero.FireRate);
        PlayerPrefs.SetFloat("jumpforce", Hero.JumpForce);
        PlayerPrefs.SetInt("firsttime", 1);
    }
}
