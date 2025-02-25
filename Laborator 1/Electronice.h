#pragma once

#include "Produs.h"

class Electronice : public Produs {
private:
    int garantie;

public:
    Electronice(std::string nume, double pret, int cantitate, int garantie);
    void afiseazaDetalii();
};
