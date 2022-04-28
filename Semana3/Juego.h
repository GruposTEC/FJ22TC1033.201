#ifndef JUEGO_H
#define JUEGO_H

#include"Dado.h"
#include "Jugador.h"
#include "Tablero.h"
#include <vector>

class Juego
{
    private:
    Dado dado;
    Tablero tablero;
    std::vector<Jugador> jugadores;

    public:
    void iniciarJuego();
    void ingresarJugadores();
    bool checarFin();
    void status();
    void set_Dado(Dado dado);
    Dado get_Dado();
    
    Tablero get_tablero();
    void set_jugadores(std::vector<Jugador> jugadores1);
    std::vector<Jugador> get_jugadores();   
    
 


};

#endif