#include "Tarjetas.h"

using namespace std;

Tarjetas :: Tarjetas(string texto, double dinero, int destino, bool salirCarcel) {
	this -> texto = texto;
	this -> dinero = dinero;
	this -> destino = destino;
	this -> salirCarcel = salirCarcel;
}

string Tarjetas :: getTexto() {
	return texto;
}

double Tarjetas :: getDinero() {
	return dinero;
}

int Tarjetas :: getDestino() {
	return destino;
}

bool Tarjetas :: getSalirCarcel() {
	return salirCarcel;
}