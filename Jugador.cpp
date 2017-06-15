#include "Jugador.h"
#include <string>
#include <vector>

using namespace std;

bool Jugador::hasMonopolyProperty(Propiedad* prop){
	string color = prop -> getColor();
	int contador = 0;

	for (int i = 0; i < casillas.size(); ++i)
	{
		Propiedad* contar = dynamic_cast<Propiedad*> (casillas[i]);
		if (contar != NULL)
		{
			//comparar var color el color de contar
			if (color.compare(contar -> getColor()) == 0)
			{
				contador++; 	
			} 
		}
	}//contar
	//TODO: completar funcion
	if (contador == 3)
	{
		return false;
	} else {
		return true;
	}
}

Jugador::Jugador(){
	dinero = 1500;
}

int Jugador::getTurno(){
	return turno;
}

void Jugador::setTurno(int sturno){
	turno = sturno;
}

string Jugador::getPieza(){
	return pieza;
}

void Jugador::setPieza(string spieza){
	pieza = spieza;
}

double Jugador::getDinero(){
	return dinero;
}

double Jugador::recibirDinero(double rdinero){
	dinero = rdinero;
	return rdinero;
}

void Jugador::pagar(double ppagar){
	dinero -= ppagar;
}

void Jugador::agregarCasilla(Casillas* casilla){
	//casillas.push_back(casilla);
}

vector<Casillas*>& Jugador::getCasillas(){
	return casillas;
}

