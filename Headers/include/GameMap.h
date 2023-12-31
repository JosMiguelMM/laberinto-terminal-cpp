#ifndef GAMEMAP_H
#define GAMEMAO_H
#include "./MapCell.h"

class GameMap
{
private:
    /* data */
public:
    MapCell cells[15][10];
    MapCell *PlayerCell;
    bool IsGameOver = false;
    GameMap(/* args */);
    void Drawmap();
    bool SetPlayerCell(int Playerx, int Playery);
    void DrawIntro();
    void DrawVictory();

protected:
    void LoadMapFromFile();
};

#endif
