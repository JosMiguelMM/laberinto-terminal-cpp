#include "../../Headers/include/Player.h"
#include <iostream>
#include <cctype>
using namespace std;

Player::Player()
{
    x = 1;
    y = 1;
}

void Player::CallInput()
{
    char UseInput = ' ';
    cout << "Movimiento " << endl;
    cin >> UseInput;

    /*CONVERTIR MAYUSCULAS A MINISCULAS*/
    if (isupper(UseInput))
    {
        UseInput = tolower(UseInput);
    }

    switch (UseInput)
    {
    case 'w':
        y = y + 1;
        break;
    case 's':
        y = y - 1;
        break;
    case 'a':
        x = x - 1;
        break;
    case 'd':
        x = x + 1;
        break;
    default:
        cout << "Valor incorrecto" << endl;
        break;
    }
    cout << "Estas en la posicion X:" << x << " Y: " << y << endl;
}