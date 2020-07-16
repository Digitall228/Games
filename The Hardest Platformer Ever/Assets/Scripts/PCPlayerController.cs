using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class PCPlayerController : MonoBehaviour, IPointerDownHandler, IDragHandler, IPointerUpHandler
{
    public delegate void OnMove(Vector2 direction);
    public delegate void OnJump();
    public delegate void OnShoot(Vector2 clickPoint);
    public delegate void OnEquip();
    public delegate void OnScroll(int s);
    public delegate void OnReCharge();
    public OnMove onMove;
    public OnShoot onShoot;
    public OnEquip onEquip;
    public OnReCharge onReCharge;
    public OnScroll onScroll;
    public OnJump onJump;

    Camera camera;
    Vector2 dir;
    PointerEventData oldEventData;
    bool shoot = false;

    public void Start()
    {
        camera = FindObjectOfType<Camera>();
    }
    private void FixedUpdate()
    {
        if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.Space))
        {
            onJump?.Invoke();
        }
        else if (Input.GetKey(KeyCode.S))
        {

        }
        if (Input.GetKey(KeyCode.A))
        {
            onMove?.Invoke(Vector2.left);
        }
        else if (Input.GetKey(KeyCode.D))
        {
            onMove?.Invoke(Vector2.right);
        }

        if (shoot)
        {
            OnDrag(oldEventData);
        }

        if (Input.GetKeyDown(KeyCode.E))
        {
            onEquip?.Invoke();
        }
        else if (Input.GetKeyDown(KeyCode.R))
        {
            onReCharge?.Invoke();
        }

        float mw = Input.GetAxis("Mouse ScrollWheel");
        if (mw > 0.1)
        {
            onScroll?.Invoke(1);
        }
        else if (mw < -0.1)
        {
            onScroll?.Invoke(-1);
        }

    }

    public void OnPointerDown(PointerEventData eventData)
    {
        shoot = true;
        OnDrag(eventData);
    }

    public void OnDrag(PointerEventData eventData)
    {
        oldEventData = eventData;
        Vector2 clickPoint = camera.ScreenToWorldPoint(eventData.position);
        onShoot?.Invoke(clickPoint);
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        shoot = false;
    }
}