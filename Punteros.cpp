#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    int num, *dir_num;

    num = 20;
    dir_num = &num;

    cout << "El numero es: " << num << endl;
    cout << "La direccion es: " << dir_num << endl;

    return 0;
}
