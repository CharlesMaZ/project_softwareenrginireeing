#ifndef MAGAZYN_H
#define MAGAZYN_H

#include <vector>
#include "produkt.h"

class Magazyn
{
private:
    std::vector<Produkt> produkty;

public:
    Magazyn();
    void DodajProdukt(const Produkt& produkt);
    void UsunProdukt(int productId);
    void WyswietlProdukty() const;
    const std::vector<Produkt>& GetProducts() const;
};

#endif // MAGAZYN_H
