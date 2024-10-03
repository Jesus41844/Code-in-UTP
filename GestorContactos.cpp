#include<iostream>
#include<vector>
#include<string>
using namespace std;

struct GestorContactos {
    string nombre;
    string apellido;
    string correo;
    string numTel;
};

void agregarContac(vector<GestorContactos>& contacto) {
    GestorContactos newContact;
    cout << "Dime el nombre del contacto: " << endl;
    cin.ignore();
    getline(cin, newContact.nombre);
    cout << "Dime el apellido del contacto: " << endl;
    getline(cin, newContact.apellido);
    cout << "Dime el correo del contacto: " << endl;
    getline(cin, newContact.correo);
    cout << "Dime el numero telefonico del contacto: " << endl;
    getline(cin, newContact.numTel);
    contacto.push_back(newContact);
}

void eliminarContacto(vector<GestorContactos>& contacto) {
    string nombre;
    cout << "Dime el nombre del contacto a eliminar" << endl;
    cin.ignore();
    getline(cin, nombre);
    for (auto it = contacto.begin(); it != contacto.end(); ++it) {
        if (it->nombre == nombre) {
            contacto.erase(it);
            cout << "Contacto eliminado con exito" << endl;
            return;
        }
    }
}

void verContactos(vector<GestorContactos>& contacto) {
    if (contacto.empty()) {
        cout << "No hay contactos para mostrar";
    } else {
        for (const auto& c : contacto) {
            cout << "Nombre: " << c.nombre << endl;
            cout << "Apellido: " << c.apellido << endl;
            cout << "Correo: " << c.correo << endl;
            cout << "Numero Telefonico: " << c.numTel << endl;
        }
    }
}


int main() {
    vector<GestorContactos> contacto;
    int opcion, funcion;
    bool salir = false;
    cout << "Buenos dias" << endl << "Que desea hacer hoy?" << endl;
    while (salir != true) {
        cout << "Sus opciones son:" << endl
        << "1. Agregar contactos." << endl
        << "2. Eliminar contactos." << endl
        << "3. Ver contactos" << endl
        << "4. Salir" << endl;
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Dime el contacto a agregar" << endl << endl;
                agregarContac(contacto);
                break;
            case 2:
                eliminarContacto(contacto);
                break;
            case 3:
                cout << "Contactos a mostrar" << endl << endl;
                verContactos(contacto);
                break;
            case 4:
                cout << "Saliendo" << endl;
                salir = true;
                break;
            default:
                cout << "Numero no valido" << endl;
                break;
            }
    }
    

    return 0;
}