#include <iostream>
using namespace std;

int suma(int a, int b){
    int c = a + b;
    return c;
}

int main() {

    int a, b;
    cout << "Escriba dos numeros" << endl;
    cin >> a >> b; 
    int Suma = suma(a,b);
    cout << "La suma es: " << Suma;
    return 0;
}
