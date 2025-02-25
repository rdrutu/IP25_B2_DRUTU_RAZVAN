#include "Cosmetice.h"

Cosmetice::Cosmetice(std::string nume, double pret, int cantitate, std::string tipPiele)
    : Produs(nume, pret, cantitate) 
{
    this->tipPiele = tipPiele;
}

void Cosmetice::afiseazaDetalii() 
{
    std::cout << "Cosmetice: " << getNume()
        << ", Pret: " << getPret() << " RON"
        << ", Cantitate: " << getCantitate() << " bucati"
        << ", Tip Piele: " << this->tipPiele << "\n";
}



