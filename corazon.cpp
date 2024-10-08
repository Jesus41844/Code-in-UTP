#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    int dim = 6;
    int cut = 2;
    int z = dim-cut;

    for (int x = cut; x < dim; x++) {
        for (int y = 0; y < z ; y++) {
            cout << "  ";
        }
        for (int a = 0; a < x*2; a++) {
            cout << "* ";
        }
        for (int s = 0; s < z*2; s++) {
            cout << "  ";
        }
        for (int w = 0; w < x*2; w++) {
            cout << "* ";
        }
        z--;
        cout << endl;
    }
        
    z = dim*2;

    for (int i = 0; i < dim*2; i++){
        for (int x = 0; x < i; x++) {
            cout << "  ";
        }
        for (int k = 0; k < z*2; k++) {
            cout << "* ";
        }
        z--;
        cout << endl;
    }
    return 0;
}
