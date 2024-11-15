#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;


int main() {
    
    char contra[8] = {'_','_','_','_','_','_','_','_'};
    char opciones[4][5] =
    {{'A','B','C','D','E'},
    {'a','b','c','d','e'},
    {'1','2','3','4','5'},
    {'#','%','&','*','@'}};

    srand((unsigned) time(NULL));
    for (int i = 0; i < 4; i++) {
        int z = 0;
        while (z < 2){
            int pos = rand() % 8;
            int rand_y = rand() % 4;

            if (contra[pos] == '_') {
                contra[pos] = opciones[i][rand_y];
                z++;
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        cout<<contra[i]<<" ";
    }
    return 0;
}
