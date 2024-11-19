#ifndef CURRENTACC_H
#define CURRENTACC_H
#include "Account.h"

class CurrentAccount : public Account
{
private:
    static const int serviceCharge;
    static const int accountPrefix;
    static int nextAccount;

public:
    CurrentAccount(string name, float initial);
    void description();
    int getServiceCharge() const;
    int getAccountPrefix() const;
    int getNextAccount() const;
    void setNextAccount(int value);
};

#endif // CURRENTACC_H
