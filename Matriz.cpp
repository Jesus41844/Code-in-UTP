#include<iostream>
using namespace std;

int main(){
    int dim;
    cout<<"Dime la dimension de la matriz: ";
    cin>>dim;
    cout<<endl;

    int contador = 1;

    int matz[dim][dim];
    for (int x = 0; x < dim; x++) {
        for (int y = 0; y < dim; y++) {
            matz[x][y] = contador;
            contador++;
        }
    }

    for (int i = 0; i < dim; i++) {
        for (int k = 0; k < dim; k++) {
            cout<< matz[i][k];
            if (matz[i][k]<10) {
                cout<<"  ";
            } else if (matz[i][k]>=10 && matz[i][k]<=99) {
                cout<<" ";
            }
        }
        cout<<endl;
    }

    return 0;
}