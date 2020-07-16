using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Cell : MonoBehaviour
{
    public SpriteRenderer innerSpriteRenderer;
    public Text bulletCountText;

    private GameObject weaponObject;

    public GameObject WeaponObject
    {
        get { return weaponObject; }
        set
        {
            weaponObject = value;
            Weapon = weaponObject.GetComponent<Weapon>();
        }
    }


    private Image image;
    private Weapon weapon;

    public Weapon Weapon
    {
        get { return weapon; }
        set
        {
            weapon = value;
            innerSpriteRenderer.sprite = weapon.sprite;
            if(weapon is Gun _gun)
            {
                gun = _gun;
            }
            UpdateInfo();
        }
    }
    private Gun gun;

    public void Start()
    {
        image = GetComponent<Image>();
    }
    public void ChangeGunObj(GameObject newWeapon)
    {
        if(WeaponObject != null)
        {
            Destroy(WeaponObject);
        }
        bulletCountText.text = "";

        WeaponObject = newWeapon;
    }
    public void UpdateInfo()
    {
        if (gun == null)
            return;

        bulletCountText.text = $"{gun.bulletCount}/{gun.pool.bulletCount}";
    }
    public void Select()
    {
        image.color = new Color(1, 1, 1, 45f / 255f);
        WeaponObject?.SetActive(true);
    }
    public void UnSelect()
    {
        image.color = new Color(1, 1, 1, 30f / 255f);
        WeaponObject?.SetActive(false);
    }
}
