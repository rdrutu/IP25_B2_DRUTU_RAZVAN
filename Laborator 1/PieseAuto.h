#pragma once

#include "Produs.h"

class PieseAuto : public Produs {
private:
    std::string compatibilitate;

public:
    PieseAuto(std::string nume, double pret, int cantitate, std::string compatibilitate);
    void afiseazaDetalii();
};
