#include <iostream>
using namespace std;

int main() {
    char seleccion;
    int a, b, c;

    char* pSeleccion = &seleccion;
    int* pA = &a;
    int* pB = &b;
    int* pC = &c;

    cout << "Desea realizar una suma (s) o una multiplicacion (m)? ";
    cin >> *pSeleccion;

    cout << "Ingrese el primer numero: ";
    cin >> *pA;

    cout << "Ingrese el segundo numero: ";
    cin >> *pB;

    if (*pSeleccion == 's') {
        *pC = *pA + *pB;
        cout << "El resultado de la suma es: " << *pC << endl;
    } else if (*pSeleccion == 'm') {
        *pC = *pA * *pB;
        cout << "El resultado de la multiplicacion es: " << *pC << endl;
    } else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}