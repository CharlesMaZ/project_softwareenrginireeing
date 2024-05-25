//
// Created by KAROL on 25.05.2024.
//
#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>
#include "Osoba.h"

class Administrator : public Osoba {
private:
    int Id;
    std::string Imie;
public:
    Administrator(int id, std::string imie);
    void ModyfikujProdukty();
    void DodajProdukt();
    void UsunProdukt();
    void WyswietlProdukty() override;
};

#endif // ADMINISTRATOR_H
