#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;

int main() {
    int dim = 15;
    char lluvia[dim][dim];

    srand((unsigned) time(NULL));
    for (int x = 0; x < dim; x++) {
        for (int y = 0; y < dim; y++) {
            int drop = rand() % 10;
            if (drop <= 3) {
                lluvia[x][y] = '\\';
            } else {
                lluvia[x][y] = ' ';
            }
        }
    }
    for (int i = 0; i < dim; i++) {
        for (int y = 0; y < dim; y++) {
            cout << lluvia[i][y] << " ";
        }
        cout << endl;
    }
    return 0;
}