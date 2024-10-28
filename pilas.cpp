#include<iostream>
using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void agregarPila(Nodo *&pila, int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo;
}

void borrarPila(Nodo *&pila, int &n){
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}

int main() {

    Nodo *pila = NULL;
    int dato;
    char seguir;

    do {
        cout<<"Inserte un numero: ";
        cin>>dato;
        agregarPila(pila, dato);

        cout<<"Agregar otro numero? S || s?";
        cin>>seguir;
    } while (seguir == 'S' || seguir == 's');
    
    cout<<"Eliminando elementos..."<<endl;

    while (pila != NULL) {
        borrarPila(pila, dato);
        cout << dato << ", ";
    }
    

    return 0;
}