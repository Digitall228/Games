using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ButtonUpgrade : MonoBehaviour, IPointerUpHandler
{
    public int unicId;
    public Text costText;
    public Form form;
    public PlayerInfo playerInfo;
    public void Start()
    {
        playerInfo = FindObjectOfType<PlayerInfo>();
        form.nextLevel = PlayerPrefs.GetInt($"nextlevel{unicId}");
        UpdateInfo();
    }
    public void OnPointerUp(PointerEventData eventData)
    {
        if(Player.Money <= form.cost[form.nextLevel] || form.sprites.Length <= form.nextLevel)
        {
            return;
        }

        ChangeButtons(form);

        form.nextLevel++;
        UpdateInfo();
    }

    public static void ChangeButtons(Form form)
    {
        Sprite sprite = form.sprites[form.nextLevel];
        Button[] btns = FindObjectsOfType<Button>();
        for (int i = 0; i < btns.Length; i++)
        {
            btns[i].image.sprite = sprite;
        }
    }
    public void UpdateInfo()
    {
        costText.text = form.cost[form.nextLevel].ToString();

        PlayerPrefs.SetInt($"nextlevel{unicId}", form.nextLevel);
        playerInfo.ChangeInfo();
    }


}

