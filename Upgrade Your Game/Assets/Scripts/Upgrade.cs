using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

[System.Serializable]
public class Upgrade : MonoBehaviour, IPointerUpHandler
{
    public int unicId;
    public Text descriptionText;
    public Text CostText;
    public UpgradeInfo[] info;
    public int nextLevel;
    public Property property;
    public PlayerInfo playerInfo;

    public void Start()
    {
        playerInfo = FindObjectOfType<PlayerInfo>();
        nextLevel = PlayerPrefs.GetInt($"nextlevel{unicId}");
        UpdateInfo();
    }
    public void OnPointerUp(PointerEventData eventData)
    {
        if (info.Length <= nextLevel)
        {
            return;
        }
        UpgradeInfo up = info[nextLevel];
        if (Player.Money <= up.cost)
        {
            return;
        }

        if (property == Property.HP)
        {
            Hero.MaxHp += (int)up.bonus;
            PlayerPrefs.SetInt("maxhp", Hero.MaxHp);
        }
        else if (property == Property.Damage)
        {
            Hero.Damage += (int)up.bonus;
            PlayerPrefs.SetInt("damage", Hero.Damage);
        }
        else if (property == Property.Speed)
        {
            Hero.Speed += up.bonus;
            PlayerPrefs.SetFloat("speed", Hero.Speed);
        }
        else if (property == Property.Fire_Rate)
        {
            Hero.FireRate += up.bonus;
            PlayerPrefs.SetFloat("firerate", Hero.FireRate);
        }
        nextLevel++;
        UpdateInfo();
    }
    public void UpdateInfo()
    {
        string znak = "+";
        if (info[nextLevel].bonus < 0)
            znak = "-";
        descriptionText.text = property.ToString() + " " + znak + info[nextLevel].bonus;
        CostText.text = info[nextLevel].cost.ToString();

        PlayerPrefs.SetInt($"nextlevel{unicId}", nextLevel);
        playerInfo.ChangeInfo();
    }

}
[System.Serializable]
public class UpgradeInfo
{
    public int cost;
    public float bonus;
}

[System.Serializable]
public enum Property
{
    HP,
    Damage,
    Speed,
    Fire_Rate
}
