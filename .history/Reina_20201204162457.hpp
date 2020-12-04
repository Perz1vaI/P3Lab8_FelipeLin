#include <iostream>
#include <string>
#include "Pieza.hpp"
using namespace std;
#ifndef REINA_H
#define REINA_H

class Reina : public Pieza
{
public:
    Reina()
    {
    }
    Reina(int x, int y, char representacion) : Pieza(x, y, representacion)
    {
    }

    bool validarMovimiento(int x_nposicion, int y_nposicion, int tablero_x, int tablero_y)
    {
        int difEnX = x_nposicion - tablero_x;
        int difEnY = y_nposicion - tablero_y;
        if (abs(difEnX) == abs(difEnY))
        {
            return true;
        }
        else if (difEnY == 0 || difEnX == 0)
        {
            return true;
        }
        else
        {
            cout << "sal";
            return false;
        }
    }
    ~Reina(){};
};
#endif