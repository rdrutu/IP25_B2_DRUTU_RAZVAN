Acest proiect implementeaza un sistem de gestionare a stocului si comenzilor pentru un magazin online, utilizand programare orientata pe obiecte in C++. Exista o clasa de baza Produs, din care deriva tipuri specifice de produse precum Electronice, Haine, Cosmetice, Bricolaj si PieseAuto. Fiecare dintre acestea isi suprascrie metoda afiseazaDetalii(), afisand informatii relevante. Produsele sunt gestionate prin clasa Stoc, care permite adaugarea, cumpararea, evitand duplicarea produselor prin actualizarea cantitatilor existente.

De asemenea, clasa Comanda gestioneaza achizitiile, atribuind fiecarei comenzi un ID unic si ajustand garantia in functie de tipul clientului (Fizica – 2 ani, Juridica – 1 an). Stocul este limitat la 10 produse distincte, iar comenzile sunt validate astfel incat sa nu permita cumpararea peste stocul disponibil.

Echipa: 
Drutu Razvan-Alexandru, Bulai Vali-Danut -> grupa B2