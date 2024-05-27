#include "Administrator.h"
#include <iostream>

Administrator::Administrator(Magazyn &magazyn) : magazyn(magazyn), isLoggedIn(false) {
    // Adding initial products - w magazynie aktualnie
//    products.push_back(Produkt(1, "Product 1", 10.99, "Description of product 1"));
//    products.push_back(Produkt(2, "Product 2", 20.50, "Description of product 2"));
//    products.push_back(Produkt(3, "Product 3", 30.00, "Description of product 3"));
//    products.push_back(Produkt(4, "Product 4", 40.75, "Description of product 4"));
//    products.push_back(Produkt(5, "Product 5", 50.25, "Description of product 5"));
}

void Administrator::AddUser(const std::string& username, const std::string& password) {
    users.push_back(std::make_pair(username, password));
}

bool Administrator::ValidateUser(const std::string& username, const std::string& password) {
    for (const auto& user : users) {
        if (user.first == username && user.second == password) {
            return true;
        }
    }
    return false;
}

void Administrator::SetCurrentUser(const std::string& username) {
    currentUser = username;
    isLoggedIn = true;
}

void Administrator::Logout() {
    currentUser.clear();
    isLoggedIn = false;
}

bool Administrator::IsUserLoggedIn() const {
    return isLoggedIn;
}

std::string Administrator::GetCurrentUser() const {
    return currentUser;
}

void Administrator::AddProduct(const Produkt& product) {
    //products.push_back(product);
    magazyn.DodajProdukt(product);
}

void Administrator::DisplayProducts() const {
    magazyn.WyswietlProdukty();
//    std::cout << std::endl;
//    for (const auto& product : products) {
//        product.Display();
//        std::cout << std::endl;
//    }
}

//const std::vector<Produkt>& Administrator::GetProducts() const {
//    return products;
//}
