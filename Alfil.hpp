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

    Alfil(int x, int y, char nombre) : Pieza(x, y, nombre)
    {
    }

    bool validarMovimiento(int x_nposicion, int y_nposicion, int tablero_x, int tablero_y)
    {
        int movimiento_x = x_nposicion - tablero_x;
        int movimiento_y = y_nposicion - tablero_y;
        if (abs(movimiento_x) == abs(movimiento_y))
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