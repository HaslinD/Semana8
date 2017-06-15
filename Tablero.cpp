#include "Tablero.h"
#include <fstream>

using namespace std;

Tablero::Tablero(){
	ifstream fileCasillas("Casillas.txt");

	if (fileCasillas.is_open())
	{
		for (int i = 0; i < 6; ++i)
		{//leer las casillas
			Propiedad* casilla = new Propiedad();
			fileCasillas >> *casilla;
			casillas.push_back(casilla);
		}
		fileCasillas.close();//cerrar archivo
	} else {
		cout << "Error al leer archivo de casillas. " << endl << "Shit.......";
	}
}

Casillas* Tablero::getCasilla(int pos){
	if (pos < 0 && pos > casillas.size() - 1)
	{
		return NULL;
	} else {
		casillas[pos];
	}
}

Tablero::~Tablero(){
	for (int i = 0; i < casillas.size(); ++i)
	{
		delete casillas[i];
	}
}