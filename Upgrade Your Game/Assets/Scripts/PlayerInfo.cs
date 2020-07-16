using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PlayerInfo : MonoBehaviour {

    public Text NameText;
    public Text RankText;
    public Text MoneyText;
    public Text ScoreText;

    public void Start()
    {
        ChangeInfo();
    }
    public void ChangeInfo()
    {
        NameText.text = "Name: " + Player.Name;
        RankText.text = "Rank: " + Player.Rank;
        MoneyText.text = "Money: " + Player.Money.ToString();
        ScoreText.text = "Score: " + Player.Score.ToString();
    }
}
