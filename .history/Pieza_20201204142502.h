#ifndef PIEZA_H
#define PIEZA_H

class Pieza
{

public:
    Pieza();

    Pieza(int, int, char);
    char getNombre();

    int getX();

    int getY();

    virtual bool validarMovimiento(int, int, int, int) = 0;

    bool movimiento(int, int, int, int);

protected:
    int x;
    int y;
    char nombre;
};
#endif