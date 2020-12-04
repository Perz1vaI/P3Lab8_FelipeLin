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

    bool validarMovimiento(int nueva_x, int nueva_y, int vieja_x, int vieja_y)
    {
        int difEnX = nueva_x - vieja_x;
        int difEnY = nueva_y - vieja_y;
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