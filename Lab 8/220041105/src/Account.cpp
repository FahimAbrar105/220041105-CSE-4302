#include "Account.h"

Account::Account(string name,float initial):accountName(name),balance(initial){}

void Account::set(string n,float b)
{
    accountName=n;
    balance=b;
}
float Account::get() const
{
    return balance;
}

void Account::setAccountNo(string accountNumber)
{
    accountNo=accountNumber;
}
