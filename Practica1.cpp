#include <iostream>
using namespace std;

int main()  {
    int mes;

    printf("Dame un numero del 1 al 6 y te dire el mes al que corresponde: \n");
    scanf("%i" ,&mes);

    if (mes == 1)
    {
        printf("El mes es Enero");
    } else if (mes == 2)
    {
        printf("El mes es Febrero");
    } else if (mes == 3)
    {
        printf("El mes es Marzo");
    } else if (mes == 4)
    {
        printf("El mes es Abril");
    } else if (mes == 5)
    {
        printf("El mes es Mayo");
    } else if (mes == 6)
    {
        printf("El mes es Junio");
    } else {
        printf("No ingresaste un numero correcto");
    }

    return 0;
}
