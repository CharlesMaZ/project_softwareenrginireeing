//
// Created by KAROL on 25.05.2024.
//
class Klient : public Osoba {
private:
    int Id;
    std::string Imie;
    std::string Nazwisko;
    int NumerKonta;
    std::string Adres;
    // Attribute1 placeholder, replace with actual type if known
    int Attribute1;
    Koszyk* koszyk;
public:
    Klient(int id, std::string imie, std::string nazwisko, int numerKonta, std::string adres)
            : Id(id), Imie(imie), Nazwisko(nazwisko), NumerKonta(numerKonta), Adres(adres), koszyk(nullptr) {}

    void Szukaj() {
        // Implement search logic
        std::cout << "Szukaj" << std::endl;
    }

    void DodajDoKoszyka(Produkt* produkt);

    void UsunZKoszyka(Produkt* produkt);

    void Zaplac() {
        // Implement payment logic
        std::cout << "Zaplac" << std::endl;
    }

    void WyswietlProdukty() override {
        // Implement product display logic
        std::cout << "WyswietlProdukty" << std::endl;
    }
};
