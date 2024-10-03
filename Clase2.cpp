#include <iostream>
using namespace std;

int main()  {
    /* Estructuras repetitivas */

    int edad;

    scanf("%i",&edad);
    printf("Usuario, escriba su edad: \n");

    if (edad > 17)
    {
        cout << "Puede matricular";
    } else {
        cout << "Tienes que esperar unos años mas para poder matricularte";
    }
    
    return 0;
}
