#ifndef PARTIDA_H
#define PARTIDA_H
#include <iostream>
#include <string>
#include <fstream>
#include "Pieza.hpp"
using namespace std;
class Partida
{

public:
    Partida()
    {
    }

    Partida(string nombre, string pieza, string movimientos)
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

    void guardarPartida()
    {

        ofstream Escribir;
        Escribir.open("./prueba.txt", ios::app);
        Escribir << nombre << "\n"
                 << pieza << "\n"
                 << movimientos << endl;
        Escribir.close();
    }

    void cargarPartida(){
        
    }

protected:
    string nombre;
    string pieza;
    string movimientos;
};

#endif