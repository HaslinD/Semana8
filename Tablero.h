#include "Propiedad.h"
#include "Casillas.h"

using namespace std;
#include <iostream>
#include <vector>

class Tablero{
	private:
		vector<Casillas*> casillas;

	public:
		Tablero();
		Casillas* getCasilla(int);
		int getCantidadCasillas(){ return casillas.size(); } //definicion inline
		~Tablero();
};

