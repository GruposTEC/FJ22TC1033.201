#include <iostream>
#include "Dado.h"
#include "Casilla.h"
#include "Tablero.h"
#include <sstream>
#include "Juego.h"

using std::cout;
using std::endl;

int main()
{
   
    cout << "Hola :D" << endl;
    /*
    Dado dado1;
    for(int i=0; i<20; i++){
        cout << dado1.tirar() << endl;
    }
    
    /*
    Casilla casilla1(3,20);
    // casilla1.set_numero(3);
    int x = casilla1.get_numero();
    cout<<"valor de numero: "<<x<<endl;

    //casilla1.set_cambio(20);
    int y = casilla1.get_cambio();
    cout<<"valor de cambio: "<<y<<endl;

   int z = casilla1.cambia_posicion();
   cout<<"cambio recibido: "<<z<<endl;
   
   Tablero Prueba;
   */

   
    Juego juego;

    juego.iniciarJuego();



}

