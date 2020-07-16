using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Pools
{
    public static List<BulletPool> bulletPools = new List<BulletPool>(); 
    static Pools()
    {
        bulletPools.Add(new BulletPool() { type = BulletType.Common});
    }
}
public class BulletPool
{
    public BulletType type;
    public List<Bullet> pool = new List<Bullet>();
    public int bulletCount = 100;
}
public enum BulletType
{
    Common,
    Rare
}
