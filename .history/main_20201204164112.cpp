#include <iostream>
#include <cstdlib>
#include "Pieza.hpp"
#include "Partida.hpp"
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
    cout << "1. Jugar partida\n2. Recrear partida\n3. Salida\n";
    cout << "Ingrese la opcion: ";
    cin >> menu;
    while (menu != 3)
    {
        switch (menu)
        {
        case 1:
        {
            cout << "Con que pieza va jugar?" << endl;
            cout << "1. Peon\n2. Caballo\n3. Alfil\n4. Torre\n5. Reina"<< endl;
            int pieza;
            switch (pieza)
            {
            case 1:
                break;
            
            default:
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


