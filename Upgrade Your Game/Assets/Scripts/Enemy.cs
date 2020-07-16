using System;
using System.Collections.Generic;
using UnityEngine;

public class Enemy : MonoBehaviour {

    public int Hp;
    public int Damage;
    public float Speed;
    public int Bonus;

    public static Action<GameObject> OnEnemyOverFly;

    public void Update()
    {
        transform.Translate(Vector3.down * Speed * Time.deltaTime);
    }

    protected virtual void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            GameController.earnedMoney += Bonus;
            Destroy(gameObject);
        }
        else if (collision.gameObject.CompareTag("HeroBullet"))
        {
            HeroBullet bullet = collision.gameObject.GetComponent<HeroBullet>();
            Hp -= bullet.damage;
            bullet.hp -= Damage;
            if (bullet.hp <= 0)
            {
                Destroy(bullet.gameObject);
            }
            if (Hp <= 0)
            {
                Destroy(gameObject);
            }
        }
        else if(collision.gameObject.CompareTag("Player"))
        {
            Destroy(gameObject);
        }
        if (collision.gameObject.CompareTag("Ground") || (collision.gameObject.CompareTag("Player") && Hero.Hp > 0) || collision.gameObject.CompareTag("HeroBullet"))
        {
            GameController.countEnemies--;
            if (GameController.countEnemies <= 0)
            {
                GameController.Finish();
            }
            GameController.mobsCompleted++;
        }
        
    }
}
