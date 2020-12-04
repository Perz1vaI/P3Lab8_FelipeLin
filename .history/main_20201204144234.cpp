#include <iostream>
#include <cstdlib>
using namespace std;
void crearTablero();
void imprimirTablero();

int main()
{
    char temp_tablero[8][8] = {
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '}

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