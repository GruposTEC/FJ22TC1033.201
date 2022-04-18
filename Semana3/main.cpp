#include <iostream>
#include "Dado.h"

using std::cout;
using std::endl;

int main()
{
    cout << "Hola :D" << endl;
    Dado dado1;
    for(int i=0; i<20; i++){
        cout << dado1.tirar() << endl;
    }

}


