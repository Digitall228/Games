using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class GameController : MonoBehaviour {

    public GameObject StartPanel;
    public GameObject FinishPanel;
    public GameObject PausePanel;
    public static GameObject _finishPanel;
    public GameObject GameOverPanel;
    public static GameObject _gameOverPanel;
    public static int countEnemies;
    public static int earnedMoney = 0;
    public static int mobsCompleted = 0;
    public static Spawner spawner;
    public GameObject SpawnPoint;
    public LevelContainer[] levels;
    public static int index;
    public IEnumerator Start()
    {
        earnedMoney = 0;
        mobsCompleted = 0;
        _finishPanel = FinishPanel;
        _gameOverPanel = GameOverPanel;
        spawner = new Spawner(levels[index], SpawnPoint.transform);
        spawner.level = levels[index];
        StartPanel.SetActive(true);
        yield return new WaitForSeconds(3);
        StartCoroutine(spawner.Spawn());
        yield return new WaitForSeconds(1);
        StartPanel.SetActive(false);
    }
	public static void Finish()
    {
        var j = FindObjectsOfType<JoyStick>();
        j[0].Disable();
        j[1].enabled = false;
        Time.timeScale = 0;
        Player.Money += earnedMoney;
        _finishPanel.SetActive(true);
        ButtonUpgrade.ChangeButtons(FindObjectOfType<Form>());
    }
    public static void GameOver()
    {
        Time.timeScale = 0;
        Player.Money += earnedMoney;
        _gameOverPanel.SetActive(true);
        ButtonUpgrade.ChangeButtons(FindObjectOfType<Form>());
    }
    public void Again()
    {
        spawner.level = levels[index];
        SceneManager.LoadScene(1);
        Time.timeScale = 1;
    }
    public void NextLevel()
    {
        if (levels.Length > index+1)
        {
            spawner.level = levels[index+1];
            SceneManager.LoadScene(1);
        }
        Time.timeScale = 1;
    }
    public void LoadMenu()
    {
        Time.timeScale = 1;
        SceneManager.LoadScene(0);
    }
    public void Pause()
    {
        Time.timeScale = Time.timeScale == 1 ? 0 : 1;
        PausePanel.SetActive(!PausePanel.activeSelf);
    }
    public void Continue()
    {
        Time.timeScale = 1;
        PausePanel.SetActive(false);
    }
}
