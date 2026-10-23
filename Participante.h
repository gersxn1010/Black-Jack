
#pragma once
#include <iostream>
#include "Mano.h"
#include "Carta.h"

using namespace std;

class Participante {
protected:
    string nombre;
    Mano mano;

public:
    Participante(string nombre);
    virtual ~Participante();

    void recibirCarta(Carta c);
    Mano getMano();
    void limpiarMano();
    string getNombre();
};
