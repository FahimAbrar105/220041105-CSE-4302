#ifndef INITIALDEPOSITMDS_H
#define INITIALDEPOSITMDS_H
#include "MonthlyDepositScheme.h"

class InitialDepositMDS:public MonthlyDepositScheme
{
private:
    float maximumInterest;
    float initialDepositAmount;
public:
    InitialDepositMDS(string name,float initial,float monthlyDeposit,float maxInterest,float initialDeposit);
    float getMaximumInterest() const
    {
        return maximumInterest;
    }
    void setMaximumInterest(float a)
    {
        maximumInterest = a;
    }
    float getInitialDepositAmount() const
    {
        return initialDepositAmount;
    }
    void setInitialDepositAmount(float a)
    {
        initialDepositAmount = a;
    }
};

#endif
