#include "SavingsAccount.h"
#include <iostream>

using namespace std;

const int SavingsAccount::accountPrefix = 200;
int SavingsAccount::nextAccount = 1;

SavingsAccount::SavingsAccount(string name, float initial, float interest) : Account(name, initial), interestRate(interest)
{
    string tempAccountNo = to_string(accountPrefix) + "--" + to_string(nextAccount);
    setAccountNo(tempAccountNo);
    nextAccount++;
}

void SavingsAccount::description()
{
    cout<< interestRate << endl;
    cout <<accountPrefix << endl;
    cout<<nextAccount << endl;
}
