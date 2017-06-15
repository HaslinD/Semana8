#include <iostream>	
#include <fstream>

#include "Casillas.h"
#include "Propiedad.h"
#include "Jugador.h"
#include "Juego.h"
#include "TirarDados.h"

using namespace std;

int main(){
	/*Casillas* c = new Casillas();
	delete c;
	Jugador* player = new Jugador();
	/*cin >> *player;
	cout << player -> getPieza() << endl;
	cout << player -> getTurno() << endl;
	delete player;*/

	/*//Prueba archivos
	ifstream file ("Jugadores.txt");

	if (file.is_open()){
		file >> *player;
		file.close();
	}

	Propiedad* uno;
	Propiedad* dos;
	uno = new Propiedad();
	dos = new Propiedad();
	ifstream casillasFile("Casillas.txt");
	if (casillasFile.is_open()){
		casillasFile >> *uno;
		casillasFile >> *dos;
		casillasFile.close();
	}
	cout << uno -> getNombre() << endl << uno -> getColor() << endl << 
			dos -> getNombre() << endl << dos -> getColor() << endl;

	delete uno;
	delete dos;
	//cout << "Pieza: " << player -> getPieza() << endl;
	//cout << "Dinero: " << player -> getDinero() << endl;

	delete player;*/

	//probar juego y tablero
	Juego* juego = new Juego();
	int retval = juego -> jugar();

	delete juego;
	
	return 0;
}