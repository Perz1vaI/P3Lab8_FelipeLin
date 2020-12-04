#include <iostream>
#include <string>
#include "Pieza.hpp"

#ifndef ALFIL_H
#define ALFIL_H

using namespace std;
class Alfil : public Pieza
{
public:
    Alfil()
    {
    }

    Alfil(int x, int y, char representacion) : Pieza(x, y, representacion)
    {
    }

    bool validarMovimiento(int x_nposicion, int y_nposicion, int tablero_x, int tablero_y)
    {
        int movimiento_x = x_nposicion - tablero_x;
        int movimiento_y = y_nposicion - tablero_y;
        if (abs(difEnX) == abs(difEnY))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    ~Alfil()
    {
    }
};

#endif