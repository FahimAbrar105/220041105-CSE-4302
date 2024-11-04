#ifndef INITIALDEPOSITMDS_H
#define INITIALDEPOSITMDS_H

#include "MonthlyDepositScheme.h"

class InitialDepositMDS : public MonthlyDepositScheme
{
private:
    float maximumInterest;
    float initialDepositAmount;
public:
    InitialDepositMDS(string name, float initial,float monthlyDeposit,float maxInterest,float initialDeposit);
    float getMaximumInterest() const;
    void setMaximumInterest(float maxInterest);
    float getInitialDepositAmount() const;
    void setInitialDepositAmount(float initialDeposit);
};

#endif
