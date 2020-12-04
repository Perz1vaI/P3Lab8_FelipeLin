#ifndef PARTIDA_H
#define PARTIDA_H
#include <iostream>
#include <string>
#include "Pieza.hpp"
using namespace std;
class Partida
{

public:
    Partida()
    {
    }

    Partida(string nombre, string pieza ,string movimientos)
    {
        this->nombre = nombre;
        this->pieza = pieza;
        this->movimientos = movimientos;
    }

    string getNombre()
    {
        return nombre;
    }

    string getPieza()
    {
        return pieza;
    }
    
    string getMovimientos()
    {
        return movimientos;
    }

    

protected:
   string nombre;
   string pieza;
   string movimientos;

};

#endif