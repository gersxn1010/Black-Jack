#include "Ficha.h"

Ficha::Ficha(int valor, string colorFicha) {
	this->valor = valor;
	this->colorFicha = colorFicha;
}

int Ficha::getValor() const {
	return valor;
}

string getColorFicha() const {
	return colorFicha;
}