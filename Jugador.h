#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "Ficha.h"

using namespace std;

class Jugador {
private:
	vector<Ficha> fichas;
	int apuestaActual;
	bool plantado;
public:
	Jugador(string nombre, vector<Ficha> fichas);
	bool quiereCarta() override;
	bool puedeApostar(int monto);
	bool apostarFicha(int indice);
	bool doblarApuesta();
	void plantarse();
	//getters
	int getDinero();
	int getApuestaActual();
	//fin de los getters
	void nuevaRonda();
};