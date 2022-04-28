#include"Juego.h"
#include"Dado.h"
#include "Jugador.h"
#include "Tablero.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void Juego::iniciarJuego(){


    int valor=0;
    cout << "Juego iniciado :D" <<endl;
    ingresarJugadores();
    status();
    //dar el turno

    int turno=0;
    while(checarFin()==false)
    {
        //para el jugador
        cout<<"Esta jugando: "<<jugadores[turno].get_nombre()<<endl;
        //tirar dado
        valor=dado.tirar();
        cout<<"Salio: "<<valor<<endl;
        //mover posicion
        jugadores[turno].set_posicion(jugadores[turno].get_posicion()+valor);
        int nuevaPosicion=tablero.checarCasilla(jugadores[turno].get_posicion());
        jugadores[turno].set_posicion(nuevaPosicion);
        status();
        turno++;
        if (turno==jugadores.size())
        {
            turno=0;
        }

        //pasar el turno
        string paso;
        cout<<"escribe algo para continuar: ";
        cin>>paso;
        cout<<""<<endl;
        //
        
    }
    
    
}
void Juego::ingresarJugadores()
{
int num=0;
cout<<"Cuantos jugadores habra? ";
cin>> num;
    //deberia de haber un for, pero no hay for :(
    for(int i=0;i<num;i++){    
    string name;
    string colour;
    cout<<"Nombre del jugador "<<i+1<<": ";
    cin>>name;
    cout<<""<<endl;
    cout<<"Color de "<<name<<": ";
    cin>>colour;
    cout<<""<<endl;
    Jugador j(name,0,colour);
    jugadores.push_back(j);
    }

}


void Juego::status(){
    for(int i=0; i<jugadores.size();i++){
        cout<<jugadores[i].get_nombre()<<" esta en la posición: ";
        cout<<jugadores[i].get_posicion()<<endl;
        
    }
}

bool Juego::checarFin()
{
    
    for(int i=0;i<jugadores.size();i++)
    {
        if (jugadores[i].get_posicion()>=100)
        {
                return true;
        }
        
    }
    return false;
}


