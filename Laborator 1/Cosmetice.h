#pragma once

#include "Produs.h"

class Cosmetice : public Produs {
private:
    std::string tipPiele;

public:
    Cosmetice(std::string nume, double pret, int cantitate, std::string tipPiele);
    void afiseazaDetalii();
};
