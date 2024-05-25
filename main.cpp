#include <iostream>
#include "Klient.h"
#include "Produkt.h"
#include "System_Platnosci.h"

int main() {
    Klient klient(1, "Jan", "Kowalski", 123456, "ul. Przykladowa 1");
    Produkt produkt1(1, "Produkt1", 10.99, "Opis produktu 1");
    Produkt produkt2(2, "Produkt2", 20.99, "Opis produktu 2");

    klient.DodajDoKoszyka(&produkt1);
    klient.DodajDoKoszyka(&produkt2);
    klient.Zaplac();

    if (klient.getKoszyk()) {
        klient.getKoszyk()->WyswietlZawartosc();
    }

    System_Platnosci systemPlatnosci;
    systemPlatnosci.PotwierdzenieZaplaty();

    return 0;
}
