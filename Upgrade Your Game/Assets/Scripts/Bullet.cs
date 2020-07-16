using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : Enemy {

    public void Start()
    {
        Hp = Damage;
    }
	protected override void OnCollisionEnter2D(Collision2D collision)
    {
        if(collision.gameObject.CompareTag("Ground") || collision.gameObject.CompareTag("Ground"))
        {
            Destroy(gameObject);
        }
    }
}
