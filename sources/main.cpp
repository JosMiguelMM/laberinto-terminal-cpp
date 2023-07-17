#include <iostream>
#include "../Headers/include/Player.h"
#include "../Headers/include/MapCell.h"
#include "../Headers/include/GameMap.h"

using namespace std;

int main()
{
    // system("clear");
    bool isGameOver = false;

    Player Hero;
    MapCell celd;
    GameMap Map;

    Map.DrawIntro();
    Map.Drawmap();

    while (Map.IsGameOver == false)
    {
        Hero.CallInput();
        if (Map.SetPlayerCell(Hero.x, Hero.y))
        {
            Map.Drawmap();
        }
        else
        {
            Hero.ResetToSafePosition();
            Map.Drawmap();
        }
    }

    return 0;
}

/*COMANDOS PARA COMPILAR Y EJECUTAR*/

/*PARA COMPILAR EN LA TERMINAL*/
/* clear && g++ -Wall -Wextra -g3 /home/josmiguelmm/Cursos-Platzi/c++practico/sources/main.cpp /home/josmiguelmm/Cursos-Platzi/c++practico/sources/src/Player.cpp /home/josmiguelmm/Cursos-Platzi/c++practico/sources/src/MapCell.cpp /home/josmiguelmm/Cursos-Platzi/c++practico/sources/src/GameMap.cpp -o /home/josmiguelmm/Cursos-Platzi/c++practico/sources/output/main && ./sources/output/main*/

/*EJECUTAR*/

/*./sources/output/main*/