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

    bool validarMovimiento(int nueva_x, int nueva_y, int vieja_x, int vieja_y)
    {

        int difEnX = nueva_x - vieja_x;
        int difEnY = nueva_y - vieja_y;
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