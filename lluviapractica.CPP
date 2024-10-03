#include<iostream>
#include <string.h>
#include <cstdlib>
#include<ctime>
#include<windows.h>
using namespace std;

int main() {
    int dim = 15;
    char lluvia[dim][dim];

    srand((unsigned) time(NULL));
    while (true) {
        for (int x = dim-1; x >= 0; x--) {
            if (x==0) {
                for (int y = 0; y < dim; y++) {
                    int drop (rand() % 10);
                    if (drop <=3) {
                        lluvia[x][y] = '.';
                    } else {
                        lluvia[x][y] = ' ';
                    }
                }
            } else {
                for (int y = 0; y < dim; y++) {
                    lluvia[x][y] = lluvia[x-1][y];
                }
                
            }
        }

        for (int x = 0; x < dim; x++) {
            for (int y = 0; y < dim; y++) {
                cout << lluvia[x][y] << " ";
            }
            cout << endl;
        }
        cout.flush();
        Sleep(500);
        system("cls");
    }
    

    return 0;
}
