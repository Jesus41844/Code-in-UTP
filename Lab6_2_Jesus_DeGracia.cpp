#include<iostream>
#include<string>
using namespace std;

struct notasEst {
    string nombre;
    int notaFinal;
};

void bubbleSort(notasEst Estudiantes[], int n){
    notasEst temp;
    for (int x = 0; x < n - 1 ; x++) {
        for (int y = 0; y < n - 1 ; y++) {
            if (Estudiantes[y].notaFinal < Estudiantes[y + 1].notaFinal) {
                temp = Estudiantes[y];
                Estudiantes[y] = Estudiantes[y+1];
                Estudiantes[y+1] = temp;
            }
        }
    }
}

int main() {

    notasEst Estudiantes[6];
    int n = 6;
    
    for (int i = 0; i < n; i++) {
        cout << "Dime el nombre del estudiante: " << endl;
        cin>> Estudiantes[i].nombre;
        cout << "Dime la nota final del estudiante: " << endl;
        cin>> Estudiantes[i].notaFinal;
    }

    bubbleSort(Estudiantes, n);
    
    cout<<"La nota final de los estudiantes ordenada de mayor a menor es la siguiente: "<<endl;
    for (int i = 0; i < 6; i++) {
        cout<<Estudiantes[i].nombre << " - " << Estudiantes[i].notaFinal<<endl;
    }
    
    
    return 0;
}
