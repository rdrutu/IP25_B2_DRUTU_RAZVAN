#pragma once
#include "Produs.h"

class Comanda {
private:
    static int urmatorulID;
    int idComanda;
    std::string tipClient;
    Produs* produs;
    int cantitate;
    int garantie;

public:
    Comanda(Produs* produs, int cantitate, std::string tipClient);
    void afiseazaComanda();
};
