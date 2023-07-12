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
    cout << "Ingresa el Movimiento " << endl;
    cin >> UseInput;

    /*CONVERTIR MAYUSCULAS A MINISCULAS*/
    if (isupper(UseInput))
    {
        UseInput = tolower(UseInput);
    }

    switch (UseInput)
    {
    case 'w':
        lasty = y;
        y = y - 1;
        if (y > 13)
        {
            y = 13;
        }

        break;
    case 's':
        lasty = y;
        y = y + 1;
        if (y < 0)
        {
            y = 0;
        }
        break;
    case 'a':
        lastx = x;
        x = x - 1;
        if (y < 0)
        {
            y = 0;
        }
        break;
    case 'd':
        lastx = x;
        x = x + 1;
        if (x > 9)
        {
            x = 9;
        }
        break;
    default:
        cout << "Valor incorrecto, precione, 'a','d','w'o 's' " << endl;
        break;
    }
    // cout << "Estas en la posicion X:" << x << " Y: " << y << endl;
}

void Player::ResetToSafePosition()
{
    x = lastx;
    y = lasty;
}