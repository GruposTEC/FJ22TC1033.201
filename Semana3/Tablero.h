#ifndef TABLERO_H
#define TABLERO_H

#include "Casilla.h"
class Tablero
{
   private:
        Casilla cas[100]; 
        void leerTablero();
   public:
        Tablero();
        int checarCasilla(int casi);
        
        

};

#endif
