#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()  {

    for (int i = 1; i <= 5; i++)
    {
        int random0 = rand();
        cout << random0 << endl;
    }

    srand((unsigned) time(NULL));

    for (int z = 0; z <= 5; z++)
    {
        int random1 = (rand() % 100);
        cout << random1 << endl;
    }
    return 0;
}
