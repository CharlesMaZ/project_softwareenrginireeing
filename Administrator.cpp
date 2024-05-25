//
// Created by KAROL on 25.05.2024.
//
#include "Administrator.h"
#include <iostream>

Administrator::Administrator(int id, std::string imie) : Id(id), Imie(imie) {}

void Administrator::ModyfikujProdukty() {
    std::cout << "ModyfikujProdukty" << std::endl;
}

void Administrator::DodajProdukt() {
    std::cout << "DodajProdukt" << std::endl;
}

void Administrator::UsunProdukt() {
    std::cout << "UsunProdukt" << std::endl;
}

void Administrator::WyswietlProdukty() {
    std::cout << "WyswietlProdukty" << std::endl;
}
