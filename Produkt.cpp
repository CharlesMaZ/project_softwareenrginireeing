//
// Created by KAROL on 25.05.2024.
//
#include "Produkt.h"

Produkt::Produkt(int id, std::string nazwa, double cena, std::string opis)
        : Id(id), Nazwa(nazwa), Cena(cena), Opis(opis) {}

int Produkt::GetId() const { return Id; }
std::string Produkt::GetNazwa() const { return Nazwa; }
double Produkt::GetCena() const { return Cena; }
std::string Produkt::GetOpis() const { return Opis; }
