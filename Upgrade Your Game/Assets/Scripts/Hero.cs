using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Hero : MonoBehaviour {

    public static int Hp = 10;
    public static int MaxHp = 10;
    public static int Damage = 1;
    public static float Speed = 5;
    public static float FireRate = 1f;
    public static float JumpForce = 8;
    public static bool IsGrounded = true;
    public static int k = 0;

    public bool canShoot = false;

    public JoyStick leftJoyStick;
    public JoyStick rightJoyStick;
    public GameObject bullet;
    public Slider hpSlider;
    public Text hpText;
    public Text moneyText;
    public new Rigidbody2D rigidbody;
    public void Start()
    {
        k = 0;
        rigidbody = gameObject.GetComponent<Rigidbody2D>();
        Hp = MaxHp;
        hpSlider.maxValue = MaxHp;
        hpSlider.value = Hp;
        hpText.text = Hp.ToString();
        moneyText.text = "Money: " + (Player.Money + GameController.earnedMoney).ToString();
        leftJoyStick.onMove = MoveChange;
        rightJoyStick.onShoot = Shoot;
        leftJoyStick.jump = Jump;
        if(Damage != 0)
        {
            StartCoroutine(ShootingTimer());
        }
    }
    public void FixedUpdate()
    {
        rigidbody.velocity = new Vector2(Speed * k, rigidbody.velocity.y);
    }
    public void Shoot(int kX, int kY)
    {
        if (canShoot && (kX != 0 || kY != 0))
        {
            canShoot = false;
            Shooting(kX, kY);
        }
    }
    public void Shooting(int kX, int kY)
    {
        GameObject obj = Instantiate(bullet, transform.position, Quaternion.identity);
        HeroBullet bull = obj.GetComponent<HeroBullet>();
        bull.damage = Damage;
        bull.ChangeDirection(kX, kY);
    }
    public IEnumerator ShootingTimer()
    {
        while (true)
        {
            yield return new WaitForSeconds(FireRate);
            canShoot = true;
        }
    }
    public void MoveChange(int K)
    {
        //transform.Translate(new Vector3(Speed * k, 0));
        k = K;
    }
    public void Jump()
    {
        if (IsGrounded)
        {
            //transform.Translate(new Vector3(0, JumpForce));
            rigidbody.AddForce(transform.up * JumpForce * 100, ForceMode2D.Impulse);
            IsGrounded = false;
        }
    }

    void OnCollisionEnter2D(Collision2D collision)
    {
        if (collision.gameObject.CompareTag("Ground"))
        {
            IsGrounded = true;
        }
        else if(collision.gameObject.CompareTag("Enemy") || collision.gameObject.CompareTag("Bullet"))
        {
            Enemy enemy = collision.gameObject.GetComponent<Enemy>();
            Hp -= enemy.Damage;
            hpSlider.value = Hp;
            hpText.text = Hp.ToString();
            if(Hp <= 0)
            {
                GameController.GameOver();
            }
        }
    }
}
