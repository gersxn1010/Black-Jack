#pragma once
#include <iostream>
#include <string>
using namespace std;

Class Ficha{
private:
	int valor;
	string colorFicha;
public:
	Ficha(int valor, string colorFicha);
	int getValor();
	string getColorFicha();
	void setValor(int valor);
	void setColorFicha(string colorFicha);
};