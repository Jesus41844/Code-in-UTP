#include <iostream>
using namespace std;

int main(){
    int NumC;

    cout << "Dime un numero para hacer un triangulo invertido: " << endl;
    cin >> NumC;

    cout << "El triangulo es: " << endl;

    for (int i = 1; i <= NumC; i++) {
        for (int x = i; x <= NumC; x++) {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
