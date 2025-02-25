#pragma once

#include <iostream>
#include <string>

class Produs {
private:
    std::string nume;
    double pret;
    int cantitate;

public:
    Produs(std::string nume, double pret, int cantitate);
    virtual ~Produs();
    virtual void afiseazaDetalii() = 0;
    void setCantitate(int cant);
    int getCantitate();
    std::string getNume();
    double getPret();
};
