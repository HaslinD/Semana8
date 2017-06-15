#include "Casillas.h"
#include <iostream>

using namespace std;

#ifndef PROPIEDAD_H
#define PROPIEDAD_H

class Propiedad : public Casillas{
	private:
		bool libre; //indica si la casilla no tiene dueño
		double precio; //información para venderla
		//información para calcular renta
		int casas, hoteles;
		double rentaNormal;
		double rentaTodas; //todas las propiedades del mismo color
		double rentaUnaCasa;
		double rentaDosCasas;
		double rentaTresCasas;
		double rentaCuatroCasas;
		double rentaHotel;
		double precioCasa;
		double precioHotel;
		//end: información calcular renta
		string color; //color de la propiedad

	public:
		//sobrecarga operador >>
		/*color, precio, rentaNormal, rentaTodas, rentaUnaCasa, rentaDosCasas, rentaTresCasas,  
		rentaCuatroCasas, rentaHotel, precioCasa, precioHotel*/
		friend istream& operator >> (istream& in, Propiedad& propiedad){
			char buffer[256];
			in.getline(buffer, 256);
			propiedad.nombre = buffer;
			
			in >> propiedad.color;
			in >> propiedad.precio;
			in >> propiedad.rentaNormal;
			in >> propiedad.rentaTodas;
			in >> propiedad.rentaUnaCasa;
			in >> propiedad.rentaDosCasas;
		 	in >> propiedad.rentaTresCasas;
			in >> propiedad.rentaCuatroCasas;
			in >> propiedad.rentaHotel;
			in >> propiedad.precioCasa;
			in >> propiedad.precioHotel;
            in.ignore(1, '\n');
			return in;
		}
		//inicializa libre
		Propiedad();
		//retornar el tipo de casilla: Propiedad
		virtual string getTipo();
		//calcular la renta en base a si el jugador tiene todas las propiedades del mismo color y cantidad de casas y hoteles
		double calcularRenta(bool);
		//marca la propiedad como que tiene dueño
		void vender();
		double getPrecio(); //Tarea
		bool estaLibre(); //Tarea
		int getCasas(); //Tarea
		string getColor(); //Tarea
		//implementación inline
		bool agregarCasa(){
			if (casas < 4){
				casas++;
				return true;
			} else {
				return false;
			}
		}
		bool agregarHotel(){
			if (casas == 4){
				hoteles = 1;
				casas = 0;
				return true;
			} else {
				return false;
			}
		}
};

#endif