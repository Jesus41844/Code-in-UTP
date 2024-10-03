#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {

    int random;
    string letra = "";

    string partes[5][3] = {{"Mami","Gata","Chica"},
    {" yo quiero"," vamo a"," vengo a"},
    {" encenderte"," transpotarte"," activarte"},
    {" lapido"," lento"," fuelte"},
    {" hasta que salga el sol"," toda la noche"," hasta mañana"},};

    srand((unsigned) time(NULL));
    
    for (int i = 0; i <= 2; i++) {
        for (int x = 0; x <= 4; x++) {
            random = (rand() % 3);
            letra = letra + partes[x][random];
        }
        cout << letra << endl << endl;
        letra = "";
    }
    return 0;
}
