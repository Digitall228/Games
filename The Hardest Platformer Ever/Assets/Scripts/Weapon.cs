using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Weapon : WeaponStruct
{
    public GunData data;
    public Sprite sprite;

    public bool canShoot = true;

    public IEnumerator ResetDelay()
    {
        yield return new WaitForSeconds(data.delay);
        canShoot = true;
    }

    public override void Shoot(Vector2 target, Vector2 character)
    {
        throw new System.NotImplementedException();
    }

    public override void Shoot(Transform target, Transform character)
    {
        throw new System.NotImplementedException();
    }

}
public abstract class WeaponStruct : MonoBehaviour
{
    public abstract void Shoot(Vector2 target, Vector2 character);
    public abstract void Shoot(Transform target, Transform character);
}
