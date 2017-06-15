#include <iostream>
#include "Casillas.h"
//#include "Jugador.h"
//forward definitioni
class Jugador;
class Casilla;
using namespace std; 

#ifndef PRINT_H
#define PRINT_H
class Print{

public: 

   void printJugador(Jugador*);
   void printCasilla(Casillas*);
//   void printTiradaDados();//TODO: completar

};

#endif 
