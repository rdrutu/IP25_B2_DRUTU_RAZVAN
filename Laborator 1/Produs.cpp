#include "Produs.h"

Produs::Produs(std::string nume, double pret, int cantitate) 
{
    this->nume = nume;
    this->pret = pret;
    this->cantitate = cantitate;
}

Produs::~Produs() {}

void Produs::setCantitate(int cant) 
{
    this->cantitate = cant;
}

int Produs::getCantitate() 
{
    return this->cantitate;
}

std::string Produs::getNume() 
{
    return this->nume;
}

double Produs::getPret() 
{
    return this->pret;
}
