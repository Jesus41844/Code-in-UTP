#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;

ifstream readfile;
ofstream editFile;

struct Clientes {
    string nombre;
    string pedido;
    string pizza;
    string bebidas;
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
        cout << "Error al abrir el archivo";
    }
    readfile.close();
}

void pedidos(const Clientes& cliente){
    editFile.open("C:/Users/j3sus/OneDrive/Documents/Programacion/Code/ProyectoFinal/pedidos.txt", ios::app);
    if (editFile.is_open()) {     
        editFile << cliente.nombre << endl << cliente.pedido << endl << cliente.pizza << endl << cliente.bebidas << endl;
        editFile.close();
        string word;
    } else {
        cout << "Error al editar el archivo";
    }
}

int main() {
    Clientes Cliente;
    char PizzBeb, seguir;
    int contador = 1;
    stringstream sc;
    bool continuar = true;
    cout << "Bienvenido a McDeallo" << endl << "Cual es su nombre: ";
    cin>>Cliente.nombre;
    while (continuar) {
        bienvenida();
        cin>>PizzBeb;
        if (PizzBeb == 'p') {
            cout << "Decide los sabores de la pizza: ";            
            for (int i = 0; i <= 4; i++) {
                cin>>Cliente.pizza;
            }
        } else if (PizzBeb == 'b') {
            cout << "Elige tu bebida: ";
            cin>>Cliente.bebidas;
        }
        cout << "Desea ordenar algo mas?, n/N para terminar el pedido: "<<endl;
        cin >> seguir;
        if (seguir == 'N' || seguir == 'n'){
            continuar = false;
        }
        sc << contador;
        string nCliente = sc.str();
        Cliente.pedido = nCliente;
        pedidos(Cliente);
        contador++;
    }
    return 0;
}