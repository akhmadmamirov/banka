//
// Created by Akhmadillo Mamirov on 3/4/25.
//
#include "user.h"
using namespace std;

User::User(const string& name, const string& accountNum)
{
    userName = name;
    balance = 0;
    accountNumber = accountNum;
}

void User::deposit(const int amount)
{
    balance += amount;
}

void User::withdraw(const int amount)
{
    balance -= amount;
}


