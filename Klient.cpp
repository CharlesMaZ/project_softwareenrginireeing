#include "klient.h"
#include <iostream>
#include <conio.h> // For getch() in Windows

using namespace std;

Klient::Klient(Magazyn& magazyn) : admin(magazyn), saldo(0.0) {
    // przykłądowe produkty inicializowane  w magazynie
}

string GetPassword() {
    string password;
    char ch;
    cout << "Podaj haslo: ";
    while ((ch = _getch()) != 13) { // 13 is the ASCII value for Enter key
        if (ch == 8) { // 8 is the ASCII value for Backspace key
            if (!password.empty()) {
                cout << "\b \b"; // Erase the last asterisk from the console
                password.pop_back();
            }
        } else {
            password.push_back(ch);
            cout << '*';
        }
    }
    cout << endl;
    return password;
}

void Klient::Rejestracja() {
    string username, password;
    cout << "Podaj nazwe uzytkownika: ";
    cin >> username;
    password = GetPassword();
    admin.AddUser(username, password);
    admin.SetCurrentUser(username);
    cout << "Rejestracja zakonczona sukcesem!" << endl;
}

void Klient::Logowanie() {
    if (admin.IsUserLoggedIn()) {
        cout << "Jestes juz zalogowany jako " << admin.GetCurrentUser() << ". Wyloguj sie najpierw." << endl;
        return;
    }

    string username, password;
    cout << "Podaj nazwe uzytkownika: ";
    cin >> username;
    password = GetPassword();
    if (admin.ValidateUser(username, password)) {
        admin.SetCurrentUser(username);
        cout << "Logowanie zakonczone sukcesem!" << endl;
    } else {
        cout << "Nieprawidlowa nazwa uzytkownika lub haslo." << endl;
    }
}

void Klient::Wylogowanie() {
    if (admin.IsUserLoggedIn()) {
        admin.Logout();
        cout << "Wylogowanie zakonczone sukcesem!" << endl;
    } else {
        cout << "Nikt nie jest zalogowany." << endl;
    }
}

void Klient::DodajProdukt() {
    if (!admin.IsUserLoggedIn()) {
        cout << "Musisz byc zalogowany jako administrator, aby dodac produkt." << endl;
        return;
    }

    int id;
    string nazwa, opis;
    double cena;

    cout << "Podaj ID produktu: ";
    cin >> id;
    cout << "Podaj nazwe produktu: ";
    cin.ignore(); // To clear the newline character from the input buffer
    getline(cin, nazwa);
    cout << "Podaj cene produktu: ";
    cin >> cena;
    cout << "Podaj opis produktu: ";
    cin.ignore();
    getline(cin, opis);

    Produkt produkt(id, nazwa, cena, opis);

    admin.AddProduct(produkt);
    cout << "Produkt dodany pomyslnie!" << endl;
}

void Klient::WyswietlProdukty() {
    admin.DisplayProducts();
}

void Klient::DodajDoKoszyka(int productId) {
    for (const auto& produkt : admin.GetProducts()) {
        if (produkt.GetId() == productId) {
            koszyk.DodajProdukt(produkt);
            cout << "Produkt dodany do koszyka!" << endl;
            return;
        }
    }
    cout << "Produkt o podanym ID nie istnieje." << endl;
}

void Klient::UsunZKoszyka(int productId) {
    koszyk.UsunProdukt(productId);
}

void Klient::WyswietlKoszyk() {
    cout << "Zawartosc koszyka:" << endl;
    koszyk.WyswietlKoszyk();
    cout << "Calkowita cena: " << koszyk.ObliczCene() << " PLN" << endl;
}

void Klient::DodajSaldo(double kwota) {
    saldo += kwota;
    cout << "Dodano " << kwota << " PLN do salda. Aktualne saldo: " << saldo << " PLN." << endl;
}

void Klient::Zaplac() {
    double total = koszyk.ObliczCene();
    if (saldo >= total) {
        saldo -= total;
        koszyk.WyczyscKoszyk();
        cout << "Zakup zakonczony sukcesem! Pozostale saldo: " << saldo << " PLN." << endl;
    } else {
        cout << "Niewystarczajace saldo do dokonania zakupu." << endl;
        //"czy chcesz doladować konto?" --> system_platnosci
    }
}
