using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public GunData gunData;

    public float journeyTime;
    private float startTime;

    private bool IsActive;

    public bool isActive
    {
        get { return IsActive; }
        set { IsActive = value; gameObject.SetActive(value); }
    }


    public Coroutine disabling;

    public void Shoot(GunData _gunData, Transform newTransform)
    {
        gunData = _gunData;
        gameObject.transform.rotation = newTransform.rotation;
        gameObject.transform.position = newTransform.position;
        isActive = true;

        journeyTime = gunData.range / gunData.bulletSpeed;

        disabling = StartCoroutine(Disable());
    }
    public void Shoot(GunData _gunData, Vector3 position, Vector3 angle)
    {
        gunData = _gunData;
        gameObject.transform.eulerAngles = angle;
        gameObject.transform.position = position;
        isActive = true;

        journeyTime = gunData.range / gunData.bulletSpeed;

        disabling = StartCoroutine(Disable());
    }
    public void Update()
    {
        transform.Translate(Vector2.right * gunData.bulletSpeed * Time.deltaTime);
    }

    public void DisableImmediatly()
    {
        StopCoroutine(disabling);
        isActive = false;
    }
    public IEnumerator Disable()
    {
        yield return new WaitForSeconds(journeyTime);
        isActive = false;
    }
    public void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.TryGetComponent(out Character character))
        {
            if (character == gunData.gunParent)
                return;

            character.TakeDamage(gunData.damage);

            Destroy(gameObject);
        }
    }
}
