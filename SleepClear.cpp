#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int color;
    int contador;
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    for (int y = 0; y <= 255; y++){
        SetConsoleTextAttribute(hConsole, y);
        cout << y << " ";
        if (y < 100) {
            cout << " ";
        }
        if (y < 10) {
            cout << " ";
        }
        contador++;
        if (contador == 16)
        {
            cout << endl;
            contador = 0;
        }
    }
    
    SetConsoleTextAttribute(hConsole, 7);
    return 0;
}
