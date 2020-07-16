using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Gun :  Weapon
{
    public GameObject coreBullet;
    public Transform bulletPool;
    public BulletPool pool;

    public int bulletCount;
    public int bulletInHolder;

    public bool isCharging = false;

    public delegate void OnRecharge();
    public OnRecharge onRecharge;
    public void Start()
    {
        sprite = GetComponent<SpriteRenderer>().sprite;
        pool = Pools.bulletPools.Find(x => x.type == data.bulletType);
        bulletCount = bulletInHolder;
        bulletPool = GameObject.FindGameObjectWithTag("BulletPool").transform;
    }

    public override void Shoot(Transform target, Transform character)
    {
        Vector2 offset = target.position - character.position;
        Vector2 direction = Vector2.ClampMagnitude(offset, 1.0f);

        float angleK = 0;
        float angle = (Mathf.Atan2(direction.y, direction.x) * 180 / Mathf.PI % 360);
        if ((angle > 90 && angle < 275) || (angle < -90 && angle > -275)) angleK += 180;
        transform.eulerAngles = new Vector3(0, 0, 1) * (angle + angleK);

        if (bulletCount > 0)
        {
            if (canShoot)
            {
                canShoot = false;
                bulletCount--;

                Bullet bullet = FindFreeBullet();
                if (bullet == null)
                {
                    bullet = CreateNewBullet();
                }

                bullet.Shoot(data, transform.position, new Vector3(0, 0, angle));
                StartCoroutine(ResetDelay());
            }
        }
        else
        {
            onRecharge?.Invoke();
        }
    }
    public override void Shoot(Vector2 target, Vector2 character)
    {
        Vector2 offset = target - character;
        Vector2 direction = Vector2.ClampMagnitude(offset, 1.0f);

        float angleK = 0;
        float angle = (Mathf.Atan2(direction.y, direction.x) * 180 / Mathf.PI % 360);
        if ((angle > 90 && angle < 275) || (angle < -90 && angle > -275)) angleK += 180;
        transform.eulerAngles = new Vector3(0, 0, 1) * (angle + angleK);

        if (bulletCount > 0)
        {
            if (canShoot)
            {
                canShoot = false;
                bulletCount--;

                Bullet bullet = FindFreeBullet();
                if (bullet == null)
                {
                    bullet = CreateNewBullet();
                }

                bullet.Shoot(data, transform.position, new Vector3(0, 0, angle));
                StartCoroutine(ResetDelay());
            }
        }
        else
        {
            onRecharge?.Invoke();
        }
    }
    public IEnumerator ReCharge(int bullets)
    {
        if (!isCharging)
        {
            isCharging = true;
            yield return new WaitForSeconds(data.reCharge);

            bulletCount += bullets;
            isCharging = false;
        }
    }
    public Bullet FindFreeBullet()
    {
        Bullet obj = pool.pool.Find(x => !x.isActive);
        return obj;
    }
    public Bullet CreateNewBullet()
    {
        GameObject obj = Instantiate(coreBullet, bulletPool);
        Bullet newBullet = obj.GetComponent<Bullet>();
        pool.pool.Add(newBullet);
        return newBullet;
    }
}
[System.Serializable]
public class GunData
{
    public float damage;
    public float delay;
    public float bulletSpeed;
    public float reCharge;
    public float range;

    public Character gunParent;

    public BulletType bulletType;
}
