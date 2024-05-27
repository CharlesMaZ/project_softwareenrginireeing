#include "produkt.h"
#include <iostream>

Produkt::Produkt() : Id(0), Cena(0.0) {}

Produkt::Produkt(int id, const std::string &nazwa, double cena, const std::string &opis)
        : Id(id), Nazwa(nazwa), Cena(cena), Opis(opis) {}

int Produkt::GetId() const { return Id; }

std::string Produkt::GetNazwa() const { return Nazwa; }

double Produkt::GetCena() const { return Cena; }

std::string Produkt::GetOpis() const { return Opis; }

void Produkt::SetId(int id) { Id = id; }

void Produkt::SetNazwa(const std::string &nazwa) { Nazwa = nazwa; }

void Produkt::SetCena(double cena) { Cena = cena; }

void Produkt::SetOpis(const std::string &opis) { Opis = opis; }

void Produkt::Display() const {
    std::cout << "Produkt ID: " << Id << std::endl;
    std::cout << "Nazwa: " << Nazwa << std::endl;
    std::cout << "Cena: " << Cena << std::endl;
    std::cout << "Opis: " << Opis << std::endl;
}
