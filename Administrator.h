#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <string>
#include <vector>
#include <utility>
#include "produkt.h"
#include "magazyn.h"

class Administrator
{
private:
    std::vector<std::pair<std::string, std::string>> users;
    //std::vector<Produkt> products;
    std::string currentUser;
    bool isLoggedIn;
    Magazyn& magazyn;

public:
    Administrator(Magazyn& magazyn);

    void AddUser(const std::string& username, const std::string& password);
    bool ValidateUser(const std::string& username, const std::string& password);
    void SetCurrentUser(const std::string& username);
    void Logout();
    bool IsUserLoggedIn() const;
    std::string GetCurrentUser() const;

    void AddProduct(const Produkt& product);
    void DisplayProducts() const;
    const std::vector<Produkt>& GetProducts() const;
};

#endif // ADMINISTRATOR_H
