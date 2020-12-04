#include <iostream>
#include <cstdlib>
#include "Pieza.hpp"
#include "Partida.hpp"
#include "Alfil.hpp"
#include "Caballo.hpp"
#include "Rey.hpp"
#include "Reina.hpp"
#include "Torre.hpp"
using namespace std;
void crearTablero();
void imprimirTablero();

int main()
{
    char temp_tablero[8][8] = {
        {' ', ' ', ' ', ' ', 'r', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', 'R', ' ', ' ', ' '}

    };

    int **tablero = new int *[8];
    for (int i = 0; i < 8; i++)
    {
        tablero[i] = new int[8];
        for (int j = 0; j < 8; j++)
        {
            tablero[i][j] = temp_tablero[i][j];
        }
    }

    int menu;
    cout << "Cosas del main no tengo casi nada solo valide movimientos y puse metodos de guardar, pero no los pongo en uso" << endl;
    cout << "1. Jugar partida\n2. Recrear partida\n3. Salida\n";
    cout << "Ingrese la opcion: ";
    cin >> menu;
    while (menu != 3)
    {
        switch (menu)
        {
        case 1:
        {
            int x, y;
            cout << "Donde va querer empezar jugar?" << endl;
            cout << "x = " << endl;
            cin >> x;
            cout << "y = " << endl;
            cin >> y;
            cout << "Con que pieza va jugar?" << endl;
            cout << "1. Peon\n2. Caballo\n3. Alfil\n4. Torre\n5. Reina" << endl;
            int pieza;
            cin >> pieza;
            switch (pieza)
            {
            case 1:
            {
                break;
            }
            case 2:
            {
                Caballo *c = new Caballo(x, y, 'C');

                break;
            }
            case 3:
            {

                Alfil *a = new Alfil(x, y, 'A');

                break;
            }
            case 4:
            {
                Torre *t = new Torre(x, y, 'T');

                break;
            }
            case 5:
            {
                Reina *r = new Reina(x, y, 'D');

                break;
            }
            default:
                cout << "No existe esa opcion" << endl;
                break;
            }
            break;
        }
        case 2:
        {

            break;
        }
        default:
        {
            cout << "No existe esa opcion\n";
            break;
        }
        }

        cout << "1. Jugar partida\n2. Recrear partida\n3. Salida\n";
        cout << "Ingrese la opcion: ";
        cin >> menu;
    }
}

void imprimirTablero(char **tablero)
{
    cout << "   A  B  C  D  E  F  G  H  " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << i << " ";
        for (int j = 0; j < 8; j++)
        {
            if (tablero[i][j] == NULL)
            {
                cout << "[ ]";
            }
            else
            {
                cout << "[";
                cout << tablero[i][j];
                cout << "]";
            }
        }
        cout << endl;
    }
    cout << endl;
}
