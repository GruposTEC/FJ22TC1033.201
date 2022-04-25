#ifndef CASILLA_H
#define CASILLA_H

class Casilla
{
 private:
int numero;
int cambio;

 public:
 
 Casilla(int n);
 Casilla(int n, int c); // c es cambio y n es número
 Casilla();
// ~Casilla();
 void set_numero(int numero);
 int get_numero();
 void set_cambio(int cambio);
 int get_cambio();
 int cambia_posicion();
 void toString();
};
#endif