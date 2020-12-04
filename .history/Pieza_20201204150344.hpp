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

    bool movimiento(int x_nposicion, int y_nposicion, int x_pos_tablero, int y_pos_tablero)
    {

        if (validarMovimiento(x_nposicion, y_nposicion, x_pos_tablero, y_pos_tablero))
        {
            if (tablero[x_nposicion][y_nposicion] != NULL)
            {

                tablero[x_nposicion][y_nposicion] = tablero[x_pos_tablero][y_pos_tablero];
                tablero[x_pos_tablero][y_pos_tablero] = NULL;
                return true;
            }
            else
            {
                tablero[x_nposicion][y_nposicion] = tablero[x_pos_tablero][y_pos_tablero];
                tablero[x_pos_tablero][y_pos_tablero] = NULL;
                x_pos_tablero = x_nposicion;
                y_pos_tablero = y_nposicion;
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