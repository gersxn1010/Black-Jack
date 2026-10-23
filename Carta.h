#pragma once
#include <iostream>
using namespace std;


class Carta{
private:
	string tipo;
	int valor;
	int numeroCarta;

public:
	Carta(string tipo, int valor, int numeroCarta);
	string getTipo();
	int getValor();
	int getNumeroCarta();
	bool esAs();
	string MostrarCarta();
};