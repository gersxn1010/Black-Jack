#pragma once
#include <iostream>

using namespace std;

class Mano {

private:

	vector<Carta> cartas;

public:

	void agregarCarta(const Carta& c);

	int calcularValor();

	bool esBlackjack();

	bool sePasa();

	void limpiar();

	int cantidadCartas();

	void mostrar();

};