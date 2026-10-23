
#pragma once
#include <iostream>
#include "Mazo.h"
#include "Participante.h"

using namespace std;

class Crupier {
private:
    Mazo mazo;

public:
    Crupier(int numeroMazos = 6);

    bool quiereCarta();
    void repartirCarta(Participante& destino);
    void repartirManoInicial(Participante& destino);
    void reiniciarSiHaceFalta();
    int cartasRestantes();
};
