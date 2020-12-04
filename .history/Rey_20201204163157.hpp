#include <iostream>
#include <string>
#include "Pieza.hpp"
#ifndef REY_H
#define REY_H

using namespace std;
class Rey : public Pieza
{
public:
    Rey()
    {
    }
    Rey(int x, int y, char represenacion) : Pieza(x, y, represenacion)
    {
    }

    bool validarMovimiento(int x_nposicion, int y_nposicion, int tablero_x, int tablero_y)
    {
        int movimiento_x = x_nposicion - tablero_x;
        int movimiento_y = y_nposicion - tablero_y;
        if ((abs(movimiento_y) == 1 && movimiento_x == 0) || (abs(movimiento_x) == 1 && movimiento_y == 0))
        {
            return true;
        }
        else if ((abs(movimiento_y) == 1) && (abs(movimiento_x) == 1))
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    ~Rey();
};

#endif