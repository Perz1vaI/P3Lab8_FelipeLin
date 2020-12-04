#ifndef PIEZA_H
#define PIEZA_H
#include <iostream>
#include <string>
using namespace std;
class Pieza
{

public:
    Pieza()
    {
    }

    Pieza(int x, int y, char nombre, Pieza ***tablero)
    {
        this->x = x;
        this->y = y;
        this->nombre = nombre;
        this->tablero = tablero;
    }
    char getNombre()
    {
        return this->nombre;
    }
    int getX()
    {
        return this->x;
    }
    int getY()
    {
        return this->y;
    }

    virtual bool validarMovimiento(int, int, int, int) = 0;

    bool movimiento(int _x, int _y, int xViejo, int yViejo)
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

protected:
    int x;
    int y;
    char nombre;
    Pieza ***tablero;
};

#endif