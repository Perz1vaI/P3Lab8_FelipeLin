#include <iostream>
#include <cstdlib>
using namespace std;
void crearTablero();
void imprimirTablero();

int main()
{
    int tablero [8][8] = {
                    {0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0 },
                    {0, 0, 0, 0, 0, 0, 0, 0 },
                    {0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 0, 0, 0, 0, 0, 0, 0},
                    {0, 1, 0, 0, 0, 0, 0, 0,}
                    
                };

                int ** mat = new int*[y];
                for (int i = 0; i < y; i++) {
                    mat[i] = new int[x];
                    for (int j = 0; j < x; j++) {
                        mat[i][j] = temp_mat[i][j];
                    }
                }
}

void crearTablero()
{
    tablero = new char *[8];
    for (int i = 0; i < 8; i++)
    {
        tablero[i] = new char *[8];
    }
}

void imprimirTablero()
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
                cout << tablero[i][j]->getRepresentacion();
                cout << "]";
            }
        }
        cout << endl;
    }
    cout << endl;
}