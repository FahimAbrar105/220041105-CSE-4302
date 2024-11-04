#ifndef SAVINGSACC_H
#define SAVINGSACC_H
#include "Account.h"

class SavingsAccount : public Account
{
private:
    static const int accountPrefix;
    static int nextAccount;
    float interestRate;

public:
    SavingsAccount(string name, float initial, float interest);
    void description();
};

#endif // SAVINGSACC_H
