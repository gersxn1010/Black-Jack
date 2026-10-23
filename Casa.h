#pragma once
#include <string>
#include <iostream>
#include "Juego.h"

using namespace std;

class Casa {

private :

	int dineroMesa;

public : 

	Casa(int dineroMesa);
	int getDineroMesa();
	void pagarApuesta(Jugador j);
	void cobrarApuesta(Jugador j);
};