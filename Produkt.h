#ifndef PRODUKT_H
#define PRODUKT_H

#include <string>

class Produkt
{
private:
    int Id;
    std::string Nazwa;
    double Cena;
    std::string Opis;

public:
    Produkt();
    Produkt(int id, const std::string& nazwa, double cena, const std::string& opis);

    int GetId() const;
    std::string GetNazwa() const;
    double GetCena() const;
    std::string GetOpis() const;

    void SetId(int id);
    void SetNazwa(const std::string& nazwa);
    void SetCena(double cena);
    void SetOpis(const std::string& opis);

    void Display() const;
};

#endif // PRODUKT_H
