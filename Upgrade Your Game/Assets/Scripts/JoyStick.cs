using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JoyStick : MonoBehaviour {

    public new bool enabled = true;
    public bool right = false;

    public Vector2 pointA;
    public Vector2 pointB;

    private float borderX;

    public Transform circle;
    public Transform outerCircle;

    public delegate void OnMove(int k);
    public delegate void OnShoot(int kX, int kY);
    public delegate void OnJump();
    public OnMove onMove;
    public OnShoot onShoot;
    public OnJump jump;

    public new Camera camera;

    public void Start()
    {
        camera = Camera.main;
        borderX = Screen.currentResolution.width;
    }
    public void Update()
    {
        if (enabled)
        {
            foreach (Touch touch in Input.touches)
            {
                if ((!right && touch.position.x <= borderX / 2) || (right && touch.position.x > borderX / 2))
                {
                    if (touch.phase == TouchPhase.Began)
                    {
                        pointA = camera.ScreenToWorldPoint(touch.position);
                        circle.transform.position = pointA;
                        outerCircle.transform.position = pointA;
                        circle.gameObject.SetActive(true);
                        outerCircle.gameObject.SetActive(true);
                    }
                    else if (touch.phase == TouchPhase.Moved)
                    {
                        circle.transform.position = touch.position;
                        pointB = camera.ScreenToWorldPoint(touch.position);
                        Vector2 offset = pointB - pointA;
                        Vector2 direction = Vector2.ClampMagnitude(offset, 1.0f);
                        int kX = 0;
                        int kY = 0;
                        if (direction.x >= 0.2f)
                        {
                            kX = 1;
                        }
                        else if (direction.x <= -0.2f)
                        {
                            kX = -1;
                        }
                        if (direction.y >= 0.2f)
                        {
                            kY = 1;
                        }

                        circle.transform.position = pointA + direction;

                        if (touch.position.x <= borderX / 2)
                        {
                            onMove(kX);
                            if (kY != 0)
                            {
                                jump();
                            }
                        }
                        else
                        {
                            onShoot(kX, kY);
                        }
                    }
                    else if (touch.phase == TouchPhase.Ended)
                    {
                        if (touch.position.x <= borderX / 2)
                        {
                            onMove(0);
                        }
                        else
                        {
                            onShoot(0, 0);
                        }
                        circle.gameObject.SetActive(false);
                        outerCircle.gameObject.SetActive(false);
                    }
                }
            }
        }
        
    }

    public void Disable()
    {
        enabled = false;
        circle.gameObject.SetActive(false);
        outerCircle.gameObject.SetActive(false);
    }
}
