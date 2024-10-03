#include <iostream>
#include <windows.h>
using namespace std;

int main()  {
    for (int Num1 = 10; Num1 >= 0; Num1 = Num1 - 1){
        for (int Num2 = 90; Num2 >= 0; Num2 = Num2 - 10)
        {
            cout << Num1 << "." << Num2;
            Sleep(100);
            system("cls");
        }
    }
    return 0;
}