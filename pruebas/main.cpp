#include <iostream>
#include <fstream>

using namespace std;

/*functions*/
void DrawMap(int HeroPosX, int HeroPosY, char map[5][5])
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if ((i == HeroPosY && j == HeroPosX))
            {
                cout << " " << 'J';
            }
            else
            {
                cout << " " << map[i][j];
            }
        }
        cout << endl;
    }
    cout << endl;
}

int limit(char HeroPos)
{
    if (HeroPos > 4)
    {
        HeroPos = 4;
    }
    else if (HeroPos < 0)
    {
        HeroPos = 0;
    }
    return HeroPos;
}

void writingdocument()
{
    /*document*/
    ofstream game_data("Game_Data.txt");

    if (game_data.is_open())
    {
        for (int i = 0; i < 2; i++)
        {
            game_data << 0 << endl;
        }
    }
    else
    {
        cout << "Error en abir el documento" << endl;
    }
    game_data.close();
}

pair<int, int> readingdocument()
{
    string valor;
    int x, y, line = 0;
    ifstream game_data("Game_Data.txt");
    if (game_data.is_open())
    {
        while (getline(game_data, valor))
        {
            line = line + 1;
            if (line == 1)
            {
                x = stoi(valor);
            }
            else if (line == 2)
            {
                y = stoi(valor);
            }
        }
    }
    return make_pair(x, y);
}

int main()
{
    system("clear");

    /*variables*/
    bool isGamerOver = false;
    char inputx = ' ', inputy = ' ';
    int HeroPosx, HeroPosy;
    char map[5][5] = {
        {'|', '|', '|', '|', '|'},
        {'|', '|', '|', '|', '|'},
        {'|', '|', '|', '|', '|'},
        {'|', '|', '|', '|', '|'},
        {'|', '|', '|', '|', '|'},
    };

    writingdocument();
    pair<int, int> result = readingdocument();

    HeroPosx = result.first;
    HeroPosy = result.second;
    DrawMap(HeroPosx, HeroPosy, map);
    while (isGamerOver == false)
    {
        cout << "Ingresa mover vertical" << endl;
        cin >> inputy;
        cout << "Ingrese mover horizontal" << endl;
        cin >> inputx;

        /*horizontal values (x)*/
        if (inputx == 'd')
        {
            HeroPosx = HeroPosx + 1;
        }
        else if (inputx == 'a')
        {
            HeroPosx = HeroPosx - 1;
        }
        else if (inputx == 'p')
        {
            isGamerOver = true;
        }

        /*checking vertical values (y)*/
        if (inputy == 'w')
        {
            HeroPosy = HeroPosy - 1;
        }
        else if (inputy == 's')
        {
            HeroPosy = HeroPosy + 1;
        }

        HeroPosx = limit(HeroPosx);
        HeroPosy = limit(HeroPosy);

        DrawMap(HeroPosx, HeroPosy, map);
    }

    return 0;
}