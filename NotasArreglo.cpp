#include <iostream>
#include <string.h>
using namespace std;

int main()  {
    int dim, suma = 0, notasTemp, promedio;

    cout << "Dime la cantidad de notas: ";
    cin >> dim;

    int notas[dim];
    
    for (int i = 0; i < dim; i++)   {
        cout << "Dime las notas a promediar: ";
        cin >> notasTemp;
        notas[i] = notasTemp;
        suma += notasTemp;
    }

    promedio = suma/dim;

    cout << "El promedio es: " << promedio << endl;
    return 0;
}
