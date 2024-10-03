#include <iostream>
using namespace std;

int main() { 

    int n;
    cout << "Dime un numero: ";
    cin >> n;    

    for (int x = 1; x <= n; x++) {
        for (int y = 1; y <= 2 * n - 1; y++) {
            if (y == x || y == 2 * n - x ) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl; 
    }
    return 0;
}