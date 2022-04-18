#ifndef CASILLA_H
#define CASILLA_H

class Casilla
{
 private:
 int numero;
 int cambio;

 public:
 void set_numero(int numero);
 int get_numero();
 void set_cambio(int cambio);
 int get_cambio();
 void cambia_posicion();


};
#endif