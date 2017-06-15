#include "TirarDados.h"
#include <ctime>
#include <cstdlib>
#include <iostream>

using namespace std;

int TirarDados::tirada(){
	srand(time(0));
	dado1 =rand()%6;
	dado2 =rand()%6;
	return dado1+dado2;
}


bool TirarDados::hayDobles(){
	if(dado1==dado2){
		return true;
	}else{
		return false;
	}
}
