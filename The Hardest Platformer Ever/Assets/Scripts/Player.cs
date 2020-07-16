using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class Player :  Character
{
    public bool isGrounded = false;

    public Weapon weapon;
    public Inventory inventory;
    public Transform gunParent;
    public Transform groundCheckPoint;
    public LayerMask groundLayer;

    private GameObject canEquipWeapon;

    public PCPlayerController controller;
    private Rigidbody2D rb;

    public override void Start()
    {
        base.Start();

        rb = GetComponent<Rigidbody2D>();

        controller.onMove = Move;
        controller.onJump = Jump;
        controller.onShoot = Shoot;
        controller.onReCharge = ReCharge;
        controller.onScroll = OnScroll;
        controller.onEquip = Equip;

        inventory.onGunChanged = OnGunChanged;
    }

    private void Equip()
    {
        if (canEquipWeapon == null)
            return;

        if (canEquipWeapon.GetComponent<Weapon>() is Gun gun)
        {
            gun.data.gunParent = this;
        }

        inventory.PickUp(canEquipWeapon);

        canEquipWeapon = null;
    }

    public void Move(Vector2 direction)
    {
        //rb.AddForce(direction * speed);
        //rb.velocity = new Vector2(speed * direction.x, rb.velocity.y);
        //rb.MovePosition(new Vector2(transform.position.x + direction.x * speed * Time.fixedDeltaTime, rb.velocity.y));
        transform.Translate(direction * Time.deltaTime * speed, Space.World);
        //transform.position = Vector3.MoveTowards(transform.position, (Vector2)transform.position + direction, Time.deltaTime * speed);
        //transform.position = Vector3.LerpUnclamped(transform.position, (Vector2)transform.position + direction, Time.deltaTime * speed);
        //GetComponent<CharacterController>().SimpleMove(direction * speed);
        
    }
    public void Jump()
    {
        //Collider2D[] colliders = Physics2D.OverlapBoxAll(gunParent.position, new Vector2(0.9f, 0.1f), 0, groundLayer);
        Collider2D[] colliders = Physics2D.OverlapCircleAll(groundCheckPoint.position, 0.2f, groundLayer);
        if (colliders.Length > 0)
            isGrounded = true;


        if (isGrounded)//(rb.velocity.y <= 0.01f) && rb.velocity.y >= -0.01f
        {
            rb.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
            //rb.velocity = new Vector2(rb.velocity.x, jumpForce);
            //rb.MovePosition((Vector2)transform.position + Vector2.up * speed * Time.fixedDeltaTime);

            isGrounded = false;
        }
    }
    public void Shoot(Vector2 clickPoint)
    {
        Vector2 direction = (Vector2)transform.position - clickPoint;
        transform.localScale = direction.x >= 0 ? new Vector3(-1, 1) : new Vector3(1, 1);
        gunParent.localScale = direction.x >= 0 ? new Vector3(-1, 1) : new Vector3(1, 1);

        if (weapon != null)
        {
            weapon.Shoot(clickPoint, transform.position);
            inventory.currentCell.UpdateInfo();
        }
    }
    public void ReCharge()
    {
        if (weapon == null)
            return;

        Gun gun = (Gun)weapon;
        if (gun.isCharging)
            return;

        int needBullets = gun.bulletInHolder - gun.bulletCount;

        if(gun.pool.bulletCount < needBullets)
        {
            needBullets = gun.pool.bulletCount;
        }

        if (needBullets == 0)
            return;

        gun.pool.bulletCount -= needBullets;

        StartCoroutine(gun.ReCharge(needBullets));

        for (int i = 0; i < inventory.cells.Count; i++)
        {
            inventory.cells[i].Invoke("UpdateInfo", gun.data.reCharge + 0.3f);
        }
    }
    private void OnGunChanged(Weapon newWeapon)
    {
        weapon = newWeapon;

        if(weapon is Gun gun)
        {
            gun.onRecharge = ReCharge;
        }
    }
    private void OnScroll(int s)
    {
        int cellIndex = inventory.cells.IndexOf(inventory.currentCell);
        int newCellIndex = cellIndex + s;

        if (newCellIndex >= inventory.cells.Count)
        {
            newCellIndex = 0;
        }
        else if (newCellIndex < 0)
        {
            newCellIndex = inventory.cells.Count - 1;
        }

        inventory.OnCellSelected(inventory.cells[newCellIndex]);
    }
    private void OnTriggerEnter2D(Collider2D collision)
    {
        if(collision.TryGetComponent(out Weapon weapon))
        {
            canEquipWeapon = collision.gameObject;
        }
    }

    private void OnDrawGizmosSelected()
    {
        Gizmos.DrawWireCube(groundCheckPoint.position, new Vector2(0.9f, 0.1f));
    }

}
