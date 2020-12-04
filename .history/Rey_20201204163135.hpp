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
        if ((abs(difEnY) == 1 && difEnX == 0) || (abs(difEnX) == 1 && difEnY == 0))
        {
            return true;
        }
        else if ((abs(difEnY) == 1) && (abs(difEnX) == 1))
        {
            return true;
        }
        else
        {
            cout << "aber";
            return false;
        }
    }
    ~Rey();
};

#endif