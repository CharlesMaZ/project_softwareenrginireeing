#include "koszyk.h"
#include <iostream>
#include <algorithm>

void Koszyk::DodajProdukt(const Produkt& produkt) {
    produkty.push_back(produkt);
}

void Koszyk::UsunProdukt(int productId) {
    auto it = std::remove_if(produkty.begin(), produkty.end(), [productId](const Produkt& produkt) {
        return produkt.GetId() == productId;
    });
    if (it != produkty.end()) {
        produkty.erase(it, produkty.end());
        std::cout << "Produkt usuniety z koszyka!" << std::endl;
    } else {
        std::cout << "Produkt o podanym ID nie znaleziony w koszyku." << std::endl;
    }
}

void Koszyk::WyswietlKoszyk() const {
    for (const auto& produkt : produkty) {
        produkt.Display();
        std::cout << std::endl;
    }
}

double Koszyk::ObliczCene() const {
    double total = 0.0;
    for (const auto& produkt : produkty) {
        total += produkt.GetCena();
    }
    return total;
}

void Koszyk::WyczyscKoszyk() {
    produkty.clear();
}
