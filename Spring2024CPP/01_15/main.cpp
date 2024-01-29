#include<iostream>
#include "bankAccount.h"
#include "bankAccountImp.cpp"

using namespace std;

int main()
{
    bankAccount myAccount(0);
    cout << "Balance is: " << myAccount.getBalance() << endl;
    myAccount.deposit(100);
    cout << "Balance is: " << myAccount.getBalance() << endl;
    myAccount.withdraw(175.44);
    cout << "Balance is: " << myAccount.getBalance() << endl;

    return 0;
}