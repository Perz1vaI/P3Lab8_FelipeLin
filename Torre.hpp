#include <iostream>
#include <string>
#include "Pieza.hpp"

#ifndef TORRE_H
#define TORRE_H

using namespace std;

class Torre : public Pieza
{
public:
    Torre()
    {
    }
    Torre(int x, int y, char nombre) : Pieza(x, y, nombre)
    {
    }

    bool validarMovimiento(int x_nposicion, int y_nposicion, int tablero_x, int tablero_y)
    {
        int movimiento_x = x_nposicion - tablero_x;
        int movimiento_y = y_nposicion - tablero_y;
        if (movimiento_y == 0 || movimiento_x == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    ~Torre()
    {
    }
};

#endif