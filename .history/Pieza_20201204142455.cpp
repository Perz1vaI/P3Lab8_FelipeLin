#include <iostream>
#include <string>
#include "Pieza.h"

Pieza::Pieza(int x, int y, char representacion)
    {
        this->x = x;
        this->y = y;
        this->representacion = representacion;
    }

char Pieza::getNombre()
    {
        return this->nombre;
    }

      int Pieza::getX()
    {
        return this->x;
    }
    int Pieza::getY()
    {
        return this->y;
    }

    bool Pieza::movimiento(int _x, int _y, int xViejo, int yViejo)
    {

        if (validarMovimiento(_x, _y, xViejo, yViejo))
        {
            if (tablero[_x][_y] != NULL)
            {

                tablero[_x][_y] = tablero[xViejo][yViejo];
                tablero[xViejo][yViejo] = NULL;
                return true;
            }
            else
            {
                tablero[_x][_y] = tablero[xViejo][yViejo];
                tablero[xViejo][yViejo] = NULL;
                xViejo = _x;
                yViejo = _y;
                return true;
            }
        }
        else
        {
            return false;
        }
    }
}