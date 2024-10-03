#include <iostream>
using namespace std;

int ganador(char tablero[3][3], int jugador){
    int ganador = 0, posible_ganador = 0;
    char simbolo;
    if (jugador == 1){
        simbolo = 'X';
        posible_ganador = jugador;
    } else if (jugador == 2) {
        simbolo = 'O';
        posible_ganador = jugador;
    }

    for (int i = 0; i < 3; i++) {
        if (tablero[i][0] == simbolo && tablero[i][1] == simbolo && tablero[i][2] == simbolo) {
            ganador = posible_ganador;
        } else if (tablero[0][i] == simbolo && tablero[1][i] == simbolo && tablero[2][i] == simbolo)  {
            ganador = posible_ganador;
        } else if (tablero[0][0] == simbolo && tablero[1][1] == simbolo && tablero[2][2] == simbolo) {
            ganador = posible_ganador;
        } else if (tablero[0][2] == simbolo && tablero[1][1] == simbolo && tablero[2][0] == simbolo) {
            ganador = posible_ganador;
        }
    }

    return ganador;
}

int main()  {
    
    int coordx, coordy, turno = 0, jugador = 1, win = 0;
    char tablero[3][3] = {{'_','_','_'},{'_','_','_'},{'_','_','_'}};

    while (turno < 9 && win == 0)    {
        cout << "Jugador " << jugador << ": Ingrese las coordenadas" << endl;
        cin >> coordx >> coordy;

        if (jugador == 1 && tablero[coordx][coordy] == '_')   {
            tablero[coordx][coordy] = 'X';
            win = ganador(tablero, jugador);
            turno++;
            jugador = 2;
        }   else if (jugador == 2 && tablero[coordx][coordy] == '_')  {
            tablero[coordx][coordy] = 'O';
            win = ganador(tablero, jugador);
            turno++;
            jugador = 1;
        } else {
            cout << "Celda ocupada" << endl;
        }

        for (int x = 0; x < 3; x++) {
            for (int y = 0; y < 3; y++) {
                cout << tablero[x][y] << " ";
            }
            cout << endl;
        }
    }

    if (win == 0) {
        cout << "No gano ningun jugador";
    } else if (win != 0) {
        cout << "Gano el jugador: " << win;
    }

    return 0;
}
