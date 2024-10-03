#include <iostream>
using namespace std;

int main()
{
    int hora, NewHora;
    cout << "Dime una hora en formato militar(24h), y te lo dire en hora normal: ";
    cin >> hora;

    while (hora >= 0 && hora <= 24)
    {
        if (hora > 12 && hora != 24)  {
            NewHora = hora -12;
            cout << "La hora es: " << NewHora << "p.m." << endl; }
        else if (hora == 12)  {
            cout << "La hora es: " << "12 p.m." << endl;  }
        else if (hora == 24)  {
            cout << "La hora es: 12 a.m." << endl;  }
        else {
            cout << "La hora es: " << hora << "a.m." << endl;  }
        hora = -1;   
    }
    return 0;
}