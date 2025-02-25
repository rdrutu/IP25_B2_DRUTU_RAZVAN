#include "Haine.h"

Haine::Haine(std::string nume, double pret, int cantitate)
    : Produs(nume, pret, cantitate) {}

void Haine::afiseazaDetalii() {
    std::cout << "Haine: " << getNume()
        << ", Pret: " << getPret() << " RON"
        << ", Cantitate: " << getCantitate() << " bucati\n";
}



