#pragma once

class bankAccount
{
    private:
        double balance; //member variables

    public:
        //member functions
        void deposit(double amount);
        void withdraw(double amount);
        double getBalance() const;
        bankAccount(double amount = 0);
};

