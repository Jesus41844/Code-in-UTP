#include<iostream>
#include<fstream>
#include<string>
using namespace std;
ifstream readfile;

struct Clientes {
    string nombre;
    int pedido;
};


void bienvenida(){
    string linea, todo;
    readfile.open("C:/Users/j3sus/OneDrive/Documents/Programacion/Code/ProyectoFinal/bienvenida.txt");
    if (readfile.is_open()) {
        while (getline(readfile, linea)) {
            cout << linea + "\n";
        }
    }
    else {
        perror("Error al abrir el archivo");
    }
    readfile.close();
}

int main() {
    char PizzBeb, seguir;
    string sabores;
    bool continuar = true;
    cout << "Bienvenido a McDeallo";
    while (continuar) {
        bienvenida();
        cin>>PizzBeb;
        if (PizzBeb == 'p') {
            cout << "Decide los sabores de la pizza: ";            
            for (int i = 0; i <= 4; i++) {
                cin>>sabores;
            }
        } else if (PizzBeb == 'b') {
            cout << "Elige tu bebida: ";
        }
        cout << "Desea ordenar algo mas? ";
        cin >> seguir;
        if (!seguir == 's' or !seguir == 'S'){
            continuar = false;
        }
    }
    return 0;
}