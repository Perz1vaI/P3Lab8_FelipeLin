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

    Caballo(int x, int y, char nombre) : Pieza(x, y, nombre) {}

    bool validarMovimiento(int x_nposicion, int y_nposicion, int tablero_x, int tablero_y)
    {

        int movimiento_x = x_nposicion - tablero_x;
        int movimiento_y = y_nposicion - tablero_y;
        if (abs(movimiento_x) == 2 && abs(movimiento_y) == 1)
        {
            return true;
        }
        else if (abs(movimiento_y) == 2 && abs(movimiento_x) == 1)
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