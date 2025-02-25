#include "PieseAuto.h"

PieseAuto::PieseAuto(std::string nume, double pret, int cantitate, std::string compatibilitate)
    : Produs(nume, pret, cantitate) 
{
    this->compatibilitate = compatibilitate;
}

void PieseAuto::afiseazaDetalii() 
{
    std::cout << "Piese Auto: " << getNume()
        << ", Pret: " << getPret() << " RON"
        << ", Cantitate: " << getCantitate() << " bucati"
        << ", Compatibilitate: " << this->compatibilitate << "\n";
}



