#include "../../Headers/include/GameMap.h"
#include <iostream>
#include <fstream>

using namespace std;

GameMap ::GameMap()
{
    LoadMapFromFile();
    // PlayerCell = NULL;
}

void GameMap::DrawIntro()
{
    string line;
    int row = 0;

    // ofstream Arch("Map.txt");

    ifstream Myfile("Intro.txt");

    if (Myfile.is_open())
    {
        while (getline(Myfile, line))
        {
            cout << line << endl;
        }
    }
    else
    {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED!" << endl;
    }
}

void GameMap::Drawmap()
{
    for (int i = 0; i < 14; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cout << cells[i][j].id;
        }
        cout << endl;
    }
}

bool GameMap::SetPlayerCell(int Playerx, int Playery)
{
    if (cells[Playery][Playerx].IsBlook() == false)
    {
        if (PlayerCell != NULL)
        {
            PlayerCell->id = ' ';
        }

        // cout << "Las coordenadas del jugador estan en: " << Playerx << "  " << Playery << endl;
        PlayerCell = &cells[Playery][Playerx];
        PlayerCell->id = '7';
        return true;
    }
    else
    {
        return false;
    }
}

void GameMap::LoadMapFromFile()
{
    string line;
    int row = 0;

    // ofstream Arch("Map.txt");

    ifstream Myfile("Map.txt");

    if (Myfile.is_open())
    {
        while (getline(Myfile, line))
        {

            for (int i = 0; i < line.length(); i++)
            {
                if (line[i] == '0')
                {
                    cells[row][i].id = ' ';
                }
                else
                {

                    cells[row][i].id = line[i];
                }
            }
            row++;
        }
    }
    else
    {
        cout << "FATAL ERROR: MAP FILE COULD NOT BE LOADED!" << endl;
    }
}