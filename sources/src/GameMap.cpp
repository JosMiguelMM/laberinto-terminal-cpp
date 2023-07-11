#include "../../Headers/include/GameMap.h"
#include <iostream>

using namespace std;

GameMap ::GameMap()
{
}
void GameMap::Drawmap()
{
    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << cells[i][j].id;
        }
        cout << endl;
    }
}

void GameMap::SetPlayerCell(int Playerx, int Playery)
{
    cout << "Las coordenadas del jugador estan en: " << Playerx << "  " << Playery << endl;
    PlayerCell = &cells[Playerx][Playery];
    PlayerCell->id = 9;
}
