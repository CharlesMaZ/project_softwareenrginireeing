#include <iostream>
#include "klient.h"
#include "magazyn.h"

using namespace std;

int main() {
    int choice;
    Magazyn magazyn;
    Klient klient;

    while (true) {
        cout << "Witaj! Jestes zalogowany jako gosc." << endl;
        cout << "Wybierz opcje:" << endl;
        cout << "1. Rejestracja" << endl;
        cout << "2. Logowanie" << endl;
        cout << "3. Wylogowanie" << endl;
        cout << "4. Dodaj Produkt do magazynu" << endl;
        cout << "5. Wyswietl dostępne Produkty" << endl;
        cout << "6. Dodaj Produkt do Koszyka" << endl;
        cout << "7. Usun Produkt z Koszyka" << endl;
        cout << "8. Wyswietl Koszyk" << endl;
        cout << "9. Dodaj Saldo" << endl;
        cout << "10. Zaplac" << endl;
        cout << "11. Wyjscie" << endl;
        cout << "Twoj wybor: ";
        cin >> choice;

        switch (choice) {
            case 1:
                klient.Rejestracja();
                break;
            case 2:
                klient.Logowanie();
                break;
            case 3:
                klient.Wylogowanie();
                break;
            case 4:
                klient.DodajProdukt();
                break;
            case 5:
                klient.WyswietlProdukty();
                break;
            case 6:
                int productId;
                cout << "Podaj ID produktu, ktory chcesz dodac do koszyka: ";
                cin >> productId;
                klient.DodajDoKoszyka(productId);
                break;
            case 7:
                cout << "Podaj ID produktu, ktory chcesz usunac z koszyka: ";
                cin >> productId;
                klient.UsunZKoszyka(productId);
                break;
            case 8:
                klient.WyswietlKoszyk();
                break;
            case 9:
                double kwota;
                cout << "Podaj kwote do dodania: ";
                cin >> kwota;
                klient.DodajSaldo(kwota);
                break;
            case 10:
                klient.Zaplac();
                break;
            case 11:
                cout << "Do widzenia!" << endl;
                return 0;
            default:
                cout << "Nieprawidlowy wybor." << endl;
        }
    }
}
