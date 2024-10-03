#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++){
        for (int x = 1; x <= 5; x++) {
            if ((i == 1 || i == 5) || (x == 1 || x == 5)) {
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        } 
        cout << endl;
    }
    return 0;
}
