#include<iostream>
#include<string>
using namespace std;

bool CorreoValido(string& correo){
    size_t atpos = correo.find('@');
    if (atpos == string::npos) {
        return false;
    }
    
    string dominio = ".com";
    size_t dominioPos = correo.size() - dominio.size();
    if (correo.substr(dominioPos) != dominio) {
        return false;
    }
    return true;
}

int main() {
    string correo;
    cout << "Introduce un correo valido: ";
    cin >> correo;

    if (CorreoValido(correo)) {
        cout << "El correo es valido";        
    } else {
        cout << "El correo es no valido";
    }
    
    return 0;
}
