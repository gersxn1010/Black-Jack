#pragma once
#include "Carta.h"
#include <vector>

using namespace std;

class Mazo
{
private:
	vector<Carta>cartas;
	 
public:
	Mazo();
	void barajar();
	Carta sacarCarta();

};
