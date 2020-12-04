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
        int movimiento_x = x_nposicion - tablero_x;
        int movimiento_y = y_nposicion - tablero_y;
        if (abs(movimiento_x) == abs(movimiento_y))
        {
            return true;
        }
        else if (movimiento_y == 0 || movimiento_x == 0)
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