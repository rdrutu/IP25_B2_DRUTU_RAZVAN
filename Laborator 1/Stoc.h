#pragma once

#include "Produs.h"

class Stoc {
private:
    Produs* produse[10];
    int numarProduse;

public:
    Stoc();
    ~Stoc();

    void adaugaProdus(Produs* produs);
    bool cumparaProdus(std::string nume, int cantitate);
    void afiseazaStoc();
};
