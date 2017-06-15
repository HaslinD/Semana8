#include "Propiedad.h"
#include <string>

using namespace std;

Propiedad::Propiedad(){
	libre = true;
	casas = 0;
	hoteles = 0;
}

string Propiedad::getTipo(){
	return "Propiedad";
}

double Propiedad::calcularRenta(bool todasColor){
	double retval = 0;
	if (todasColor){ //si tiene todas las propiedades del mismo color
		//renta base
		retval = rentaTodas;
		//renta si tiene casas
		switch (casas){
			case 1:{
				retval = rentaUnaCasa;
				break;
			}
			case 2:{
				retval = rentaDosCasas;
				break;
			}
			case 3:{
				retval = rentaTresCasas;
				break;
			}
			case 4:{
				retval = rentaCuatroCasas;
				break;
			}
			default:{

			}
		}//Fin switch
		//si tiene hotel
		if (hoteles == 1){
			retval = rentaHotel;
		}
		//retornar renta
		return retval;
	} else {
		retval = rentaNormal;
		return retval;
	}
}

void Propiedad::vender(){
	libre = false;
}

double Propiedad::getPrecio(){
	return -1;
}

bool Propiedad::estaLibre(){
	return true;
}

string Propiedad::getColor(){
	return "Color";
}