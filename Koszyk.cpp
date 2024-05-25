//
// Created by KAROL on 25.05.2024.
//
#include "Koszyk.h"
#include <iostream>
#include <algorithm>

Koszyk::Koszyk(int id) : Id(id), CenaCalosc(0.0) {}

void Koszyk::DodajProdukt(Produkt* produkt) {
    ListaProduktow.push_back(produkt);
    CenaCalosc += produkt->GetCena();
}

void Koszyk::UsunProdukt(Produkt* produkt) {
    auto it = std::find(ListaProduktow.begin(), ListaProduktow.end(), produkt);
    if (it != ListaProduktow.end()) {
        CenaCalosc -= (*it)->GetCena();
        ListaProduktow.erase(it);
    }
}

void Koszyk::WyswietlZawartosc() {
    std::cout << "Koszyk zawiera:" << std::endl;
    for (auto& produkt : ListaProduktow) {
        std::cout << "Produkt: " << produkt->GetNazwa() << " Cena: " << produkt->GetCena() << std::endl;
    }
    std::cout << "Calkowita cena: " << CenaCalosc << std::endl;
}
