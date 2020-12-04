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

    Pieza(int x, int y, char nombre)
    {
        this->x = x;
        this->y = y;
        this->nombre = nombre;
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

    

protected:
    int x;
    int y;
    char nombre;
};

#endif