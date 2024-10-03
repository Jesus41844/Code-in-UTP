#include <iostream>
using namespace std;

int Suma(int a, int b, int c) {
    int Sumf, result;
    Sumf = a + b + c;
    if (Sumf == 12)
    {
        result = true;
    } else {
        result = false;
    }

    return result;
}

int main()  {

    int num1, num2, num3, num4, num5;
    int sumf1, sumf2, sumf3, sumc1, sumc2, sumc3;

    printf("El Sudoku a resolver es el siguiente: \nLa suma de filas debe dar 12 \n");    
    printf("3 / A / B \nC / 4 / D \nE / 6 / 5 \nDime los numeros que pienses que son los correctos: \n");

    printf("A= \n");
    scanf("%d", &num1);

    printf("B= \n");
    scanf("%d", &num2);

    printf("C= \n");
    scanf("%d", &num3);

    printf("D= \n");
    scanf("%d", &num4);

    printf("E= \n");
    scanf("%d", &num5);

    if (num1 != num2 && num1 != num3 && num1 != num4 && num1 != num5 && num2 != num3 && num2 != num4 && num2 != num5 && num3 != num4 && num3 != num5 && num4 != num5)
    {
        sumf1 = Suma(3, num1, num2);
        sumf2 = Suma(num3, 4, num4);
        sumf3 = Suma(num5, 6, 5);
        sumc1 = Suma(3, num3, num5);
        sumc2 = Suma(num1, 4, 6);
        sumc3 = Suma(num2, num4, 5);

        if (sumf1 == true && sumf2 == true && sumf3 == true && sumc1 == true && sumc2 == true && sumc3 == true) {
            printf("Es la respuesta correcta");
        }   else {
            printf("No es la respuesta correcta, intentalo de nuevo");
        }
    } else {
            printf("Uno de los numeros se repite, intenta de nuevo");
    }
    
    return 0;
}