#include "CurrentAccount.h"
#include <iostream>

using namespace std;

const int CurrentAccount::serviceCharge = 100;
const int CurrentAccount::accountPrefix = 100;
int CurrentAccount::nextAccount = 1;

CurrentAccount::CurrentAccount(string name, float initial) : Account(name, initial)
{
    string tempAccountNo = to_string(accountPrefix) + "--" + to_string(nextAccount);
    setAccountNo(tempAccountNo);
    nextAccount++;
}

void CurrentAccount::description()
{
    cout <<serviceCharge << endl;
    cout <<accountPrefix << endl;
    cout <<nextAccount << endl;
}
int CurrentAccount::getServiceCharge() const
{
    return serviceCharge;
}

int CurrentAccount::getAccountPrefix() const
{
    return accountPrefix;
}

int CurrentAccount::getNextAccount() const
{
    return nextAccount;
}
void CurrentAccount::setNextAccount(int a)
{
    nextAccount = a;
}
