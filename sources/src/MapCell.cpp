#include "../../Headers/include/MapCell.h"
#include <iostream>
using namespace std;

MapCell::MapCell(/* args */)
{
    id = 0;
}

bool MapCell::IsBlook()
{
    if (id == '1')
    {
        cout<<"Perdiste"<<endl;
        return true;
    }
    else
    {
        return false;
    }
}