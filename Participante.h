
#pragma once
#include <iostream>
#include <string>
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

    void recibirCarta(const Carta& c);
    const Mano& getMano() const;
    void limpiarMano();
    string getNombre() const;
};
