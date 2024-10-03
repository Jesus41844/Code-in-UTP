#include <iostream>
using namespace std;

int main()  {
    char nota[1];

    printf("Dime tu nota: \n");
    scanf("%1s" ,&nota);

    if (nota == "A")
    {
        printf("Excelente");
    } else if (nota == "B")
    {
        printf("Bueno");
    } else if (nota == "C")
    {
        printf("Decente");
    } else if (nota == "D")
    {
        printf("Mejorable");
    } else if (nota == "F")
    {
        printf("Fatal");
    } else {
        printf("No ingresaste un nota correcta");
    }

    return 0;
}
