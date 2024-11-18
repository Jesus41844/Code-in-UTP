#include <iostream>
#include <windows.h>
using namespace std;

void dibujarTanque(int nivel) {
    system("cls");
    for (int i = 10; i > 0; --i) {
        if (i <= nivel) {
            cout << "| *** |\n";
        } else {
            cout << "|     |\n";
        }
    }
    cout << "|-----|\n";
}

int main() {
    int nivel_actual = 0;
    int nivel_nuevo;
    while (nivel_nuevo != -1) {
        cout << "Ingrese el nivel de agua (0-10) o -1 para salir: ";
        cin >> nivel_nuevo;

        if (nivel_nuevo >= 0 && nivel_nuevo <= 10) {
            if (nivel_nuevo > nivel_actual) {
                for (int i = nivel_actual + 1; i <= nivel_nuevo; ++i) {
                    dibujarTanque(i);
                    Sleep(500);
                }
            } else if (nivel_nuevo < nivel_actual) {
                for (int i = nivel_actual; i >= nivel_nuevo; --i) {
                    dibujarTanque(i);
                    Sleep(500);
                }
            }
            nivel_actual = nivel_nuevo;
        } else {
            cout << "Por favor, ingrese un nivel válido entre 0 y 10.\n";
        }
    }

    return 0;
}