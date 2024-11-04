#ifndef MONTHLYDEPOSITSCHEME_H
#define MONTHLYDEPOSITSCHEME_H
#include "Account.h"

class MonthlyDepositScheme : public Account
{
private:
    static const int accountPrefix;
    static int nextAccount;
    float monthlyDepositAmount;

public:
    MonthlyDepositScheme(string name, float initial, float monthlyDeposit);
    void description();
};

#endif // MONTHLYDEPOSITSCHEME_H
