#include<iostream>
#include<cmath>
using namespace std;

int intereses(float interes, int monto, int acnos){
    double result;
    float rest2 = 1 + interes/100;

    result = pow(rest2, acnos);

    double fn = monto * result;
        
    return fn;
}

int main() {
    int monto, mFinal, cAcnos;
    float interes;
    cout<<"Dime el interes que te ofrece el banco: "<<endl;
    cin>>interes;
    
    cout<<"Dime la cantidad de su monto inicial: ";
    cin>>monto;

    cout<<"Dime la cantidad de años que quieres calcular: "<<endl;
    cin>>cAcnos;

    mFinal= intereses(interes,monto,cAcnos);

    cout<<"La cantidad de plata que tendras despues de "<<cAcnos<< " años es de: "<<mFinal<<endl;

    return 0;
}
