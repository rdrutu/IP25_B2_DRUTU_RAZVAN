#include "Electronice.h"

Electronice::Electronice(std::string nume, double pret, int cantitate, int garantie)
    : Produs(nume, pret, cantitate) 
{
    this->garantie = garantie;
}

void Electronice::afiseazaDetalii() {
    std::cout << "Electronice: " << getNume() << ", Pret: " << getPret()
        << " RON, Cantitate: " << getCantitate()
        << ", Garantie: " << this->garantie << " luni\n";
}


