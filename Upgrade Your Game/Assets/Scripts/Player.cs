using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public static class Player {

    private static int _money = 0;
    public static string Name = "";
    public static string Rank = "Junior";
    public static bool FirstTime = true;
    private static int _score;
    private static int _levelIndex;

    public static int LevelIndex
    {
        get { return _levelIndex; }
        set { _levelIndex = value; }
    }


    public static int Score
    {
        get { return _score; }
        set { _score = value; }
    }

    public static int Money
    {
        get { return _money; }
        set { _money = value; }
    }

}
