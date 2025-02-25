#include "Stoc.h"
#include "Comanda.h"
#include "Electronice.h"
#include "Haine.h"
#include "Cosmetice.h"
#include "PieseAuto.h"
#include <iostream>

int main() {
    Stoc stoc;
    stoc.adaugaProdus(new Electronice("Laptop", 3500, 10, 24));
    stoc.adaugaProdus(new Haine("Tricou", 50, 20));
    stoc.adaugaProdus(new Cosmetice("Crema hidratanta", 100, 15, "Ten uscat"));
    stoc.adaugaProdus(new PieseAuto("Filtru de aer", 120, 8, "Dacia Logan"));
    stoc.adaugaProdus(new PieseAuto("Filtru de polen", 210, 3, "Skoda Octavia"));


    std::cout << "\n Stoc initial \n";
    stoc.afiseazaStoc();

    Comanda c1(new Electronice("Laptop", 3500, 10, 24), 2, "Fizica");
    Comanda c2(new Haine("Tricou", 50, 20), 3, "Juridica");
    Comanda c3(new Cosmetice("Crema hidratanta", 100, 15, "Ten uscat"), 5, "Fizica");
    Comanda c4(new PieseAuto("Filtru de aer", 120, 8, "Dacia Logan"), 1, "Juridica");

    c1.afiseazaComanda();
    c2.afiseazaComanda();
    c3.afiseazaComanda();
    c4.afiseazaComanda();

    stoc.cumparaProdus("Laptop", 2);
    stoc.cumparaProdus("Tricou", 3);
    stoc.cumparaProdus("Crema hidratanta", 5);
    stoc.cumparaProdus("Filtru de aer", 1);

    std::cout << "\n Stoc final \n";
    stoc.afiseazaStoc();

    return 0;
}
