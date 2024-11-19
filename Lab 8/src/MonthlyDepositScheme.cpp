#include "MonthlyDepositScheme.h"
#include <iostream>

using namespace std;

const int MonthlyDepositScheme::accountPrefix = 900;
int MonthlyDepositScheme::nextAccount = 1;

MonthlyDepositScheme::MonthlyDepositScheme(string name, float initial, float monthlyDeposit) : Account(name, initial), monthlyDepositAmount(monthlyDeposit)
{
    string tempAccountNo = to_string(accountPrefix) + "--" + to_string(nextAccount);
    setAccountNo(tempAccountNo);
    nextAccount++;
}

void MonthlyDepositScheme::description()
{
    cout <<monthlyDepositAmount << endl;
    cout <<accountPrefix << endl;
    cout <<nextAccount << endl;
}
