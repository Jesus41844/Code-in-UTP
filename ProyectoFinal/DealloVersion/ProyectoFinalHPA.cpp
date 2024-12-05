#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include <windows.h>
using namespace std;

ifstream readfile;
ofstream editFile;

//Informacion de Clientes
struct Clientes {
    string nombre;
    string pizza; 
    string bebida;
    int pedido = 00;
    float costo_pizza = 0;
    float costo_bebida = 0;
};

//Menú del Restaurante
void menu(){
    string linea; 
    readfile.open("C:/Users/j3sus/OneDrive/Documents/Programacion/Code/ProyectoFinal/DealloVersion/menu.txt");

    if(readfile.is_open()) {
        while (getline(readfile, linea)) {
            cout << linea + "\n";
        }
    }
    else {
        perror("Error al cargar menú");
    }
    readfile.close();
}

//Registro de pedidos
void pedidos(const Clientes& cliente){

    editFile.open("C:/Users/j3sus/OneDrive/Documents/Programacion/Code/ProyectoFinal/DealloVersion/pedidos.txt", ios::app);

    if(editFile.is_open()) {
        
        editFile <<  "PEDIDO #" << cliente.pedido << endl;
        editFile << "NOMBRE: " << cliente.nombre << endl;
        editFile << cliente.pizza << "..................$" << cliente.costo_pizza << endl;
        editFile << cliente.bebida << "..................$" << cliente.costo_bebida << endl;
        editFile << endl << "TOTAL:                     $" << cliente.costo_bebida + cliente.costo_pizza << endl << endl;

        editFile.close();

    } else {
        cout << "Error al registrar pedido";
    }
}

int main(){

    Clientes Cliente;
    bool seguir = true, *p_seguir = &seguir; // Puntero que apunta a 'seguir'
    int deseo_p, deseo_b;
    string nuevo_pedido;
    string opciones[8] = {"Queso", "Pepperoni", "Hawaiana", "Napolitana", "Coca Cola", "Fanta", "Fresa", "Pina Colada"};
    float precios[8] = {5.00, 4.50, 7.00, 9.00, 1.00, 1.00, 4.00, 5.50};

    while(*p_seguir == true){
        
        //Imprimir menú
        menu();
        cout << endl;

        //Info cliente
        cout << "Nombre: ";
        cin >> Cliente.nombre;
        Cliente.pedido += 1;

        //Pizza
        cout << "Pizza: ";
        cin >> deseo_p;
        while(deseo_p > 4 || deseo_p < 1){
            cout << "Pizza no valida: ";
            cin >> deseo_p; 
        }
        Cliente.pizza = opciones[deseo_p - 1];
        Cliente.costo_pizza = precios[deseo_p - 1];

        //Bedidas
        cout << "Bedida: ";
        cin >> deseo_b;
        while(deseo_b > 8 || deseo_b < 5){
            cout << "Bebida no valida: ";
            cin >> deseo_b; 
        }
        Cliente.bebida = opciones[deseo_b - 1];
        Cliente.costo_bebida = precios[deseo_b - 1];  

        //Archivo de Texto
        pedidos(Cliente);

        cout << endl << "Nuevo pedido? Si/No: ";
        cin >> nuevo_pedido;

        while(nuevo_pedido != "Si" && nuevo_pedido != "si" && nuevo_pedido != "No" && nuevo_pedido != "no" )
        {
            cout << "Intente de nuevo: ";
            cin >> nuevo_pedido;
        }
        if (nuevo_pedido == "Si" || nuevo_pedido == "si")
        {
            system("cls");
        }
        else{
            system("cls");
            *p_seguir = false;
        }
    }

    return 0;
}