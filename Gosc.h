//
// Created by KAROL on 25.05.2024.
//
#ifndef GOSC_H
#define GOSC_H

#include "Osoba.h"

class Gosc : public Osoba {
public:
    void Zarejestruj();
    void Zaloguj();
    void WyswietlProdukty() override;
};

#endif // GOSC_H
