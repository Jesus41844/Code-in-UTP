#include<iostream>
using namespace std;

int main() {
    
    int num, *direccion;

    cout << "Ingrese un numero: ";
    cin >> num;

    direccion = &num;
    
    if (*direccion % 2 == 0) {
        cout << "El numero " << *direccion << " es par" << endl;
        cout << "La ruta:" << direccion << endl;
    } else {
        cout << "El numero " << direccion << "es impar" << endl;
        cout << "Ruta: " << direccion << endl;
    }
    
    return 0;
}
