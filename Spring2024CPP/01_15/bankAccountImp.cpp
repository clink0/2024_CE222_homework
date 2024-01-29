#include <iostream>
#include "bankAccount.h"
using namespace std;


//implement the class member functions

void bankAccount::deposit(double amount)
{
    if (amount > 0)
        balance += amount;
    else
        cout << "deposit must be positive!" << endl;
}

double bankAccount::getBalance() const
{
    return balance;
}

void bankAccount::withdraw(double amount)
{
    if (amount > 0 && amount < balance)
        balance -= amount;
    else
        cout << "cannot withdraw that amount" << endl;
}

bankAccount::bankAccount(double amount)
{
    balance = amount;
}