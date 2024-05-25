//
// Created by KAROL on 25.05.2024.
//
#ifndef KOSZYK_H
#define KOSZYK_H

#include <vector>
#include "Produkt.h"

class Koszyk {
private:
    int Id;
    std::vector<Produkt*> ListaProduktow;
    double CenaCalosc;
public:
    Koszyk(int id);
    void DodajProdukt(Produkt* produkt);
    void UsunProdukt(Produkt* produkt);
    void WyswietlZawartosc();
};

#endif // KOSZYK_H
