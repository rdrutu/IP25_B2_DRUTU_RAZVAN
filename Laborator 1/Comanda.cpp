#include "Comanda.h"
#include <iostream>

int Comanda::urmatorulID = 1;

Comanda::Comanda(Produs* produs, int cantitate, std::string tipClient) 
{
    this->idComanda = this->urmatorulID;
    this->urmatorulID++;
    this->produs = produs;
    this->cantitate = cantitate;
    this->tipClient = tipClient;

    if (this->tipClient == "Fizica") {
        this->garantie = 2;
    }
    else {
        this->garantie = 1;
    }
}

void Comanda::afiseazaComanda()
{
    std::cout << "Comanda #" << this->idComanda << " | Produs: " << this->produs->getNume()
        << " | Cantitate: " << this->cantitate
        << " | Tip client: " << this->tipClient
        << " | Garantie: " << this->garantie << " ani\n";
}
