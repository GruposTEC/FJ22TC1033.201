#include"Casilla.h"
#include <iostream>

using std::cout;
using std::endl;

void Casilla::set_numero(int numero)
{
  this->numero=numero;
  /*
  alternativamente 
  numero = num;
  */  
}

int Casilla :: get_numero()
{
    return numero;
}
void Casilla::set_cambio(int cambi)
{
    cambio=cambi;
}

int Casilla::get_cambio()
{
    return cambio;
}


 int Casilla::cambia_posicion() 
 {
   return numero + cambio;
 }

  
 Casilla::Casilla(int n)
 {
   numero = n;
 }
 Casilla::Casilla(int n, int c)
 {
   numero = n;
   cambio = c;
 } // c es cambio y n es número
 Casilla :: Casilla()
 {
   
 }
 
 Casilla :: ~Casilla()
 {
   std::cout << "Destruyéndome D:" << endl;
 }

