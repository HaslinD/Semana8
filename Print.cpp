#include "Print.h"
#include "Propiedad.h"
#include "Jugador.h"
#include "Casillas.h"
#include <typeinfo>
void Print::printJugador(Jugador* jugador){
  cout<<"-----------------------------"<<endl;
  cout<<"Pieza: "<<jugador->pieza<<endl
      <<"Dinero: M$"<<jugador->dinero<<endl;
  cout<<"-----------------------------"<<endl;
}

void Print::printCasilla(Casillas* casilla){
 if(typeid(*casilla) == typeid(Propiedad)){
   Propiedad* propiedad = dynamic_cast<Propiedad*>(casilla);
   cout<<"------Propiedad"<<endl
       <<"Nombre: "<<propiedad->nombre<<endl
       <<"Color: "<<propiedad->color<<endl
       <<"Precio: "<<propiedad->precio<<endl
       <<"Casas: "<<propiedad->casas<<endl
       <<"Hoteles: "<<propiedad->hoteles<<endl;
  }



}
