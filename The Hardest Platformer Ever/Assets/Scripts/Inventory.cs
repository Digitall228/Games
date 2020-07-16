using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Inventory : MonoBehaviour
{
    public Transform gunParent;

    public List<Cell> cells = new List<Cell>();
    public Cell currentCell;

    public delegate void OnGunChanged(Weapon weapon);
    public OnGunChanged onGunChanged;

    public void OnCellSelected(Cell cell)
    {
        if (cell != currentCell)
        {
            currentCell.UnSelect();

            cell.Select();
            currentCell = cell;

            onGunChanged?.Invoke(cell.Weapon);
        }
    }
    public void PickUp(GameObject gun)
    {
        gun.SetActive(false);
        Destroy(gun.GetComponent<BoxCollider2D>());

        Vector3 scale = gun.transform.localScale;
        gun.transform.SetParent(gunParent);
        gun.transform.localScale = scale;
        gun.transform.localPosition = new Vector3(0.4f, 0, 10);

        Cell freeCell = SearchFreeCell();
        if(freeCell == null)
        {
            freeCell = currentCell;
        }

        freeCell.ChangeGunObj(gun);

        if (freeCell == currentCell)
        {
            onGunChanged?.Invoke(gun.GetComponent<Weapon>());
            currentCell.Select();
        }
    }

    private Cell SearchFreeCell()
    {
        for (int i = 0; i < cells.Count; i++)
        {
            if(cells[i].Weapon == null)
            {
                return cells[i];
            }
        }

        return null;
    }
}
