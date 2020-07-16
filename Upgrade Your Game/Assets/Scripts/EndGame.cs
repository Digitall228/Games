using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EndGame : MonoBehaviour {

    public Text MoneyText;
    public Text MobsCompletedText;

    public void Start()
    {
        LoadInfo();
    }
    public void LoadInfo()
    {
        MoneyText.text = "Earned money: " + (GameController.earnedMoney + GameController.spawner.level.reward).ToString();
        MobsCompletedText.text = "Mobs completed: " + GameController.mobsCompleted.ToString();
    }
}
