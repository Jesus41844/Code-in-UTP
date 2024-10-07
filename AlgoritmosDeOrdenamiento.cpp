#include <iostream>
using namespace std;

int main() {
    bool verificacion = true;
    int lista[10] = {1,7,5,8,9,6,4,3,2,10};
    for (int i = 0; i < 10; i++) {
        cout << lista[i] << " ";
    }

    cout << endl;

    while (verificacion == true) {
        verificacion = false;
        for (int x = 0; x <= 8; x++) {
            if (lista[x] > lista[x+1]) {
                verificacion = true;
                int temp = lista[x];
                lista[x] = lista[x+1];
                lista[x+1] = temp;
            }
        }
    }

    for (int y = 0; y < 10; y++) {
        cout << lista[y] << " ";
    }
    
    return 0;
}
