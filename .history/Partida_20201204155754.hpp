#ifndef PARTIDA_H
#define PARTIDA_H
#include <iostream>
#include <string>
using namespace std;
class Partida
{

public:
    Partida()
    {
    }

    Partida(string nombre, Pieza pieza ,string movimientos)
    {
        this->nombre = nombre;
        this->pieza = pieza;
        this->movimientos = movimientos;
    }

    char getNombre()
    {
        return nombre;
    }

    int getPieza()
    {
        return pieza.getName();
    }
    
    int getMovimientos()
    {
        return movientos;
    }

    

protected:
   string nombre;
   Pieza pieza;
   string movimientos;

};

#endif