#include <iostream>
using namespace std;

bool DMA(int &dia, int &mes, int &acno) {
    bool verificacion = true;
    if (acno >= 2000 && acno <=2024)    {
        if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 9 || mes == 12)  {
            if (dia >=1 && dia < 31)    {
                verificacion = true;
                dia++;
            } else if (dia == 31 && mes != 12) {
                verificacion = true;
                dia=1;
                mes++;
            } else if (dia == 31 && mes == 12) {
                verificacion = true;
                dia = 1; mes = 1; acno++;
            }
        } else if (mes == 4 || mes == 6 || mes == 10 || mes == 11)    {
            if (dia >=1 && dia <= 30)    {
                verificacion = true;
                dia++;
            } else if (dia == 30)   {
                verificacion = true;
                dia = 1;
                mes++;
            }
        }
        else if (mes == 2)  {
            if (dia == 28)  {
                verificacion = true;
                dia = 1;
                mes++;
                } 
        } else {
            verificacion = false;
        }
    }
    return verificacion;
}

int main()  {
    int dia, mes, acno;

    printf("Dime un dia: \n");
    scanf("%i" ,&dia);
    printf("Dime un mes: \n");
    scanf("%i" ,&mes);
    printf("Dime un año: \n");
    scanf("%i" ,&acno);

    DMA(dia, mes, acno);
    cout << "El dia de mañana es: " << dia << "-" << mes << "-" << acno;

    return 0;
}