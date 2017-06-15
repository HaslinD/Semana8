#include <string>
#include <iostream>

#ifndef TARJETAS_H
#define TARJETAS_H

using namespace std;

class Tarjetas {
	private:
		string texto;
		double dinero;
		int destino;
		bool salirCarcel;
	public:
		Tarjetas(string, double, int, bool);
		string getTexto();
		double getDinero();
		int getDestino();
		bool getSalirCarcel();
		friend istream& operator >> (istream& in, Tarjetas& tarjetas) {
			char buffer[256];
			in.getline(buffer, 256);
			tarjetas.texto = buffer;

			in >> tarjetas.dinero;
			in >> tarjetas.destino;
			in >> tarjetas.salirCarcel;
			in.ignore(1, '\n');
			return in;
		}

};
#endif