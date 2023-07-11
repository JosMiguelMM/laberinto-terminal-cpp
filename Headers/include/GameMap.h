#ifndef GAMEMAP_H
#define GAMEMAO_H
#include "./MapCell.h"

class GameMap
{
private:
    /* data */
public:
    MapCell cells[15][10];
    MapCell* PlayerCell;
    GameMap(/* args */);
    void Drawmap();
    void SetPlayerCell(int Playerx, int Playery);
};

#endif
