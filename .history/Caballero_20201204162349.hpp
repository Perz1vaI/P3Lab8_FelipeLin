#include <iostream>
#include "Pieza.hpp"
using namespace std;
using namespace std;
#ifndef CABALLO_H
#define CABALLO_H
class Caballo : public Pieza
{
public:
    Caballo() {}

    Caballo(int x, int y, char representacion) : Pieza(x, y, representacion) {}

    bool validarMovimiento(int x_nposicion, int y_nposicion, int tablero_x, int tablero_y)
    {

        int difEnX = x_nposicion - tablero_x;
        int difEnY = y_nposicion - tablero_y;
        if (abs(difEnX) == 2 && abs(difEnY) == 1)
        {
            return true;
        }
        else if (abs(difEnY) == 2 && abs(difEnX) == 1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    ~Caballo()
    {
    }
};
#endif