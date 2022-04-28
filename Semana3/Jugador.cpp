#include "Jugador.h"
#include <iostream>
#include <string>

using std::string;

Jugador::Jugador(string nom, int pos, string col)
{
    nombre=nom;
    posicion=pos;
    color=col;
}

void Jugador::set_nombre(string nombr)
{
    nombre = nombr;
}

string Jugador::get_nombre()
{
    return nombre;
}
void Jugador::set_posicion(int posicio)
{
    posicion = posicio;
}

int Jugador::get_posicion()
{
    return posicion;
}
void Jugador::set_color(string colo)
{
    color = colo;
}
string Jugador::get_color()
{
    return color;
}