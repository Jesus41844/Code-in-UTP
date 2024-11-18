#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;
    ifstream myfile("pedidos.txt"); // Abre el archivo directamente en el constructor

    if (myfile.is_open()) { // Verifica si el archivo se abrió correctamente
        while (getline(myfile, line)) {
            cout << line << endl;
        }
    } else {
        perror("Error al abrir el archivo"); // Proporciona un mensaje de error detallado
    }

    return 0;
}