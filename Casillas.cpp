#include "Casillas.h"
#include <string>

using namespace std;

int Casillas::getPosicion(){
	return posicion;
}

void Casillas::setPosicion(int pos){
	posicion = pos;
}

string Casillas::getNombre(){
	return nombre;
}

void Casillas::setNombre(string name){
	nombre = name;
}