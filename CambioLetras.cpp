#include <iostream>
#include <string.h>
using namespace std;

int main()  {
    /*
    string nombre = "Elias Fabrega";
    cout << "El nombre es: "<< nombre << endl;
    cout << "Y tiene: " << nombre.size() << " caracteres" << endl;

    nombre.erase(nombre.size()-1);
    cout << "Y ahora el nombre es: " << nombre << endl;

    cout << "La septima letra es: " << nombre.at(6) << endl;
    string nombre = "Sebastian Jesus Sarmiento Saragoza";
    string nuevaFrase = "";

    for (int i = 0; i < nombre.size (); i++)
    {
        if (nombre.at(i) == 's') {
            nuevaFrase = nuevaFrase + 'z';
        } else if (nombre.at(i) == 'S') {
            nuevaFrase = nuevaFrase + 'Z';
        } else {
            nuevaFrase = nuevaFrase + nombre.at(i);
        }
    }
    cout << "El nuevo nombre es: "<< nuevaFrase;
    */
    string Frase = "";
    string nuevaFrase = "";

    cout << "Dime una frase" << endl;
    getline(cin, Frase);

    for (int i = 0; i < Frase.size (); i++)
    {
        if (Frase.at(i) == 'a') {
            nuevaFrase = nuevaFrase + 'i';
        } else if (Frase.at(i) == 'e')  {
            nuevaFrase = nuevaFrase + 'i';
        } else if (Frase.at(i) == 'o')  {
            nuevaFrase = nuevaFrase + 'i';
        } else if (Frase.at(i) == 'u')  {
            nuevaFrase = nuevaFrase + 'i';
        } else if (Frase.at(i) == 'A')  {
            nuevaFrase = nuevaFrase + 'i';
        } else if (Frase.at(i) == 'E')  {
            nuevaFrase = nuevaFrase + 'i';
        } else if (Frase.at(i) == 'O')  {
            nuevaFrase = nuevaFrase + 'i';
        } else if (Frase.at(i) == 'U')  {
            nuevaFrase = nuevaFrase + 'i';
        } else {
            nuevaFrase = nuevaFrase + Frase.at(i);
        }
    }
    cout << nuevaFrase;
    return 0;
}
