#include "magazyn.h"
#include <iostream>
#include <algorithm>

Magazyn::Magazyn() {
    produkty.push_back(Produkt(1, "Product 1", 10.99, "Description of product 1"));
    produkty.push_back(Produkt(2, "Product 2", 20.50, "Description of product 2"));
    produkty.push_back(Produkt(3, "Product 3", 30.00, "Description of product 3"));
    produkty.push_back(Produkt(4, "Product 4", 40.75, "Description of product 4"));
    produkty.push_back(Produkt(5, "Product 5", 50.25, "Description of product 5"));
}
void Magazyn::DodajProdukt(const Produkt& produkt) {
    produkty.push_back(produkt);
}

void Magazyn::UsunProdukt(int productId) {
    for (int i = 0; i < produkty.size() ; ++i) {
        if (produkty[i].GetId() == productId){
            produkty.erase(produkty.begin() + i);
        } else{
            std::cout << "cos poszlo nie tak przy usuwaniu produktu z magazynu" << std::endl;
        }
    }
}

void Magazyn::WyswietlProdukty() const {
    for (int i = 0; i < produkty.size(); ++i) {
        produkty[i].Display();
        std::cout << "\n";
    }
}

const std::vector<Produkt>& Magazyn::GetProducts() const {
    return produkty;
}
