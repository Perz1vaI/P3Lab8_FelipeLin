#include <iostream>
#include <string>
#include "Pieza.h"

Pieza::Pieza(int x, int y, char nombre)
    {
        this->x = x;
        this->y = y;
        this->nombre = nombre;
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

    
