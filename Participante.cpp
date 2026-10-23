#include "Participante.h"
#include "Mano.h"
#include "Carta.h"

Participante::Participante(string nombre) { // Constructor que inicializa el nombre del participante
	this->nombre = nombre;
}

Participante::~Participante() { 
}

void Participante::recibirCarta(const Carta& c) { 
	mano.agregarCarta(c);
}

const Mano& Participante::getMano() const { 
	return mano;
} 

void Participante::limpiarMano() {
	mano.limpiar();
}

string Participante::getNombre() const {
	return nombre;
}