#include <iostream>
#include <typeinfo>

#pragma once

using namespace std;

class Casillas{
	friend class Print;

	protected:
		int posicion;
		string nombre;
	public:
		string getNombre();
		void setNombre(string);
		int getPosicion();
		void setPosicion(int);
		//determinar si se puede comprar la casilla
		//determinar el tipo de casilla en forma de un string
		//Propiedad, Ferrocarril, Salida, Cárcel, Impuestos, Arca, Casualidad, Libre, Servicios
		virtual string getTipo() = 0;
		//dueño
		//precio
};
