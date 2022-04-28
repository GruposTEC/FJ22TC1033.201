#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>

using std::string;

class Jugador
{
    private:
        string nombre;
        int posicion;
        string color;
        
    public:
        Jugador(string nom, int pos, string col);
        void set_nombre(string nombre);
        string get_nombre();
        void set_posicion(int posicion);
        int get_posicion();
        void set_color(string color);

        string get_color();



    


};

#endif