//
// Created by KAROL on 25.05.2024.
//
#ifndef PRODUKT_H
#define PRODUKT_H

#include <string>

class Produkt {
private:
    int Id;
    std::string Nazwa;
    double Cena;
    std::string Opis;
public:
    Produkt(int id, std::string nazwa, double cena, std::string opis);
    int GetId() const;
    std::string GetNazwa() const;
    double GetCena() const;
    std::string GetOpis() const;
};

#endif // PRODUKT_H
