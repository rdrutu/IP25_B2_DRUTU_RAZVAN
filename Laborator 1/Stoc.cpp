#include "Stoc.h"
#include <iostream>

Stoc::Stoc() 
{
    this->numarProduse = 0;
    for (int i = 0; i < 10; i++) {
        this->produse[i] = nullptr;
    }
}

Stoc::~Stoc() {
    for (int i = 0; i < this->numarProduse; i++) {
        if (this->produse[i] != nullptr) {
            std::cout << "Stergere produs: " << this->produse[i]->getNume() << "\n";
            delete this->produse[i];
            this->produse[i] = nullptr;
        }
    }
}

void Stoc::adaugaProdus(Produs* produs) 
{
    for (int i = 0; i < this->numarProduse; i++) 
    {
        if (this->produse[i]->getNume() == produs->getNume()) 
        {
            this->produse[i]->setCantitate(this->produse[i]->getCantitate() + produs->getCantitate());
            std::cout << "Cantitate actualizata pentru produsul existent: "
                << produs->getNume() << " -> Noua cantitate: "
                << this->produse[i]->getCantitate() << " bucati.\n";
            delete produs;
            return;
        }
    }
    if (this->numarProduse < 100) 
    {
        this->produse[this->numarProduse] = produs;
        this->numarProduse++;
        std::cout << "Produs nou adaugat in stoc: " << produs->getNume()
            << " | Pret: " << produs->getPret() << " RON"
            << " | Cantitate: " << produs->getCantitate() << "\n";
    }
    else 
    {
        std::cout << "Stoc plin! Nu se mai pot adauga produse.\n";
    }
}


bool Stoc::cumparaProdus(std::string nume, int cantitate) {
    for (int i = 0; i < this->numarProduse; i++) {
        if (this->produse[i] != nullptr && this->produse[i]->getNume() == nume) {
            if (this->produse[i]->getCantitate() >= cantitate) {
                this->produse[i]->setCantitate(this->produse[i]->getCantitate() - cantitate);
                return true;
            }
            else {
                std::cout << "Stoc insuficient pentru " << nume << ".\n";
                return false;
            }
        }
    }
    std::cout << "Produsul '" << nume << "' nu exista in stoc.\n";
    return false;
}

void Stoc::afiseazaStoc() 
{
    std::cout << "\nSTOC PRODUSE\n";
    std::cout << "------------\n";

    if (this->numarProduse == 0) {
        std::cout << "Stocul este gol! Nu exista produse.\n";
        return;
    }
    int j = 1;
    for (int i = 0; i < this->numarProduse; i++) {
        if (this->produse[i] != nullptr) {
            std::cout << j << ". ";
            this->produse[i]->afiseazaDetalii();
            std::cout << "\n"; 
            j++;
        }
    }
}


