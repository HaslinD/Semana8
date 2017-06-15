#include "Juego.h"
#include <fstream>
#include <iostream>
#include <typeinfo>

using namespace std;

Juego::Juego(){
	tablero = new Tablero();
	turnoActual = 1;
}

Juego::~Juego(){
	delete tablero;
	for (int i = 0; i < jugadores.size(); ++i)
	{
		delete jugadores[i];
	}
	//liberar tarjetas
}

void Juego::leerJugadores(){
	ifstream fileJugadores("Jugadores.txt");
	if (fileJugadores.is_open())
	{
		for (int i = 0; i < 2; ++i)
		{
			Jugador* jugador = new Jugador();
			fileJugadores >> *jugador;
			jugadores.push_back(jugador);
		}
		fileJugadores.close();
	}
}

int Juego::jugar(){
	//inicializar todo
	leerJugadores();
	//inicializar las posiciones jugadores
	for (int i = 0; i < jugadores.size(); ++i)
	{
		posiciones.push_back(0);
	}

	while(true){
	//determinar a quien le toca jugar
		Jugador* jugadorActual = NULL;
		int posJugadorActual;
		for (int i = 0; i < jugadores.size(); ++i)
		{
			if (jugadores[i] -> getTurno() == turnoActual)
			{
				posJugadorActual = i;
				jugadorActual = jugadores[i];
				//mover el turno actual hacia adelante
				(turnoActual == jugadores.size()) ? turnoActual = 1 : turnoActual++;
			}
		}
		//tirar dados
		int resultadoDados;
		resultadoDados = 1;
		//mover el jugador de casilla
		int nuevaCasilla = posiciones[posJugadorActual] + resultadoDados;
		if (nuevaCasilla >= tablero -> getCantidadCasillas())
		{
			nuevaCasilla -= tablero -> getCantidadCasillas();
		}
		posiciones[posJugadorActual] = nuevaCasilla;

		Casillas* casillaActual = NULL;


		try {
			//obtener la casilla actual
			Casillas* casillaActual = tablero -> getCasilla(nuevaCasilla);
		}catch(int e){
			cout << "casilla fuera de rango" << endl;
		}

		if (casillaActual != NULL)
		{
			//determinar tipo casilla
			if (typeid(*casillaActual) == typeid(Propiedad))
			{
				Propiedad* propiedad = dynamic_cast<Propiedad*>(casillaActual);
				if (propiedad -> estaLibre())
				{//si esta libre el jugador compra
					double precio = propiedad -> getPrecio();
					if (jugadorActual -> getDinero() > precio)
					{
						jugadorActual -> agregarCasilla(casillaActual);
						jugadorActual -> pagar(precio);
						propiedad -> vender();
					}//si tiene dinero
					//si esta libre
				} else { //si no esta libre
					//de terminar el jugador actual
					bool esDelJugadorActual = false;
					for (int i = 0; i < jugadorActual -> getCasillas().size(); ++i)
					{
						if (jugadorActual -> getCasillas()[i] == casillaActual)
						{
							posJugadorActual = i;
							jugadorActual = jugadores[i];

							(turnoActual + 1 > jugadores.size()) ? turnoActual = 1 : turnoActual++;
							break;	
						}
					}
					if (esDelJugadorActual)
					{
						//TODO: acciones de comprar casas / hoteles
					} else {
						// determinar de quien es

						// determinar la renta
						// double renta = 
						// pagar la renta
					}
				}

				//acciones por casilla
			}
		}
	}
	return 0;
}