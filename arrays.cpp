#include <iostream>
#include <string.h>
using namespace std;

int main()  {
/*
    int Notas[4] = {5, -8, 0, 120}; //Arreglo
    Notas[1] = Notas[1] + 12;
    cout << "El numero es: " << Notas[1]; //Llamado al arreglo, siempre inician desde el 0
*/
    int dim = 3;
    char Letras[dim][dim] = {{'A', 'Q', 'Y'}, {'Q', 'K', 'P'},{'T', 'V', 'M'}};

    for (int i = 0; i < dim; i++)   {
        for (int x = 0; x < dim; x++)   {
            cout << Letras[i][x] << " ";
        }
        cout << endl;
    }
    


    return 0;
}
