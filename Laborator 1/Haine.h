#pragma once

#include "Produs.h"
class Haine : public Produs {
public:
    Haine(std::string nume, double pret, int cantitate);
    void afiseazaDetalii();
};

