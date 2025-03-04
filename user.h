//
// Created by Akhmadillo Mamirov on 3/4/25.
//

#ifndef USER_H
#define USER_H
#include <string>
using namespace std;

class User
{
public:
    explicit User(const string& name, const string& accountNum);
    string accountNumber;
    string userName;
    int balance;
    void deposit(int amount);
    void withdraw(int amount);
};


#endif //USER_H
