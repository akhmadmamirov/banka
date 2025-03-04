//
// Created by Akhmadillo Mamirov on 3/4/25.
//

#ifndef BANK_H
#define BANK_H
#include <map>
#include <string>
#include "user.h"
using namespace std;

class Bank
{
private:
    std::map<string, User*> users;

public:
    string name;
    explicit Bank(const string& bankName);
    void addUser(const string& userName);
    void getAllUsers();
};

#endif //BANK_H
