#ifndef LOANACC_H
#define LOANACC_H
#include "Account.h"

class LoanAccount : public Account
{
private:
    static const int accountPrefix;
    static int nextAccount;
    float interestRate;

public:
    LoanAccount(string name, float initial, float interest);
    void description();
};

#endif // LOANACC_H
