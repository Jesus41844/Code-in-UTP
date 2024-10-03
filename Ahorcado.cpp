#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;

bool errores(int intentos, bool fail) {
    fail = false;
    switch (intentos) {
    case 1:
        cout << "   ======" << endl;
        cout << "   |    |" << endl;
        cout << "   |    O" << endl;
        cout << "   |" << endl;
        cout << "   |" << endl;
        cout << "   |" << endl;
        cout << "  ===" << endl;
    break;
    case 2:
        cout << "   ======" << endl;
        cout << "   |    |" << endl;
        cout << "   |    O" << endl;
        cout << "   |   /|" << endl;
        cout << "   |" << endl;
        cout << "   |" << endl;
        cout << "  ===" << endl;
    break;
    case 3:
        cout << "   ======" << endl;
        cout << "   |    |" << endl;
        cout << "   |    O" << endl;
        cout << "   |   /|\\" << endl;
        cout << "   |" << endl;
        cout << "   |" << endl;
        cout << "  ===" << endl;
    break;
    case 4:
        cout << "   ======" << endl;
        cout << "   |    |" << endl;
        cout << "   |    O" << endl;
        cout << "   |   /|\\" << endl;
        cout << "   |    |" << endl;
        cout << "   |" << endl;
        cout << "  ===" << endl;
    break;
    case 5:
        cout << "   ======" << endl;
        cout << "   |    |" << endl;
        cout << "   |    O" << endl;
        cout << "   |   /|\\" << endl;
        cout << "   |    |" << endl;
        cout << "   |    /\\" << endl;
        cout << "  ===" << endl;
    break;
    case 6:
        fail = true;
    }
    return fail;
}

bool RecorrerString(char PUsuario[], char POculta[], char temp, int dim){
    bool retorno;
    for (int x = 0; x < dim; x++) {
        if (temp == POculta[x]) {
            if (PUsuario[x] == '_') {
                PUsuario[x] = temp;
                retorno = true;
            }
        }
    }
    return retorno;
}

bool compararPalabras(char PUsuario[], char POculta[], int dim) {
    for (int i = 0; i < dim; i++) {
        if (PUsuario[i] != POculta[i]) {
            return false;
        }
    }
    return true;
}

int main()  {
    int intentos = 0, dim = 6;
    bool win;
    bool fail;
    char temp;
    char POculta[dim] = {'P','A','N','A','M','A'};
    char PUsuario[dim] = {'_', '_', '_', '_', '_', '_'};
    while (win != true || fail != true) {
        cout << "Dime una letra: ";
        cin >> temp;
        if (RecorrerString(PUsuario, POculta, temp, dim)) {
            cout << "Letra encontrada" << endl;
            cout << PUsuario << endl;
            if (POculta == PUsuario) {
                win = true;
            }
        } else {
            cout << "Letra no encontrada" << endl;
            intentos++;
            if (errores(intentos, fail)) {
                cout << "Has Perdido, intentalo de nuevo";
                fail = true;
            } else {
                cout << "Llevas: " << intentos << " intentos." << endl;
                fail = true;
            }
        }
        if (compararPalabras(PUsuario, POculta, dim)) {
            cout << "GANASTE";
            win = true;
        }
    }
    return 0;
}