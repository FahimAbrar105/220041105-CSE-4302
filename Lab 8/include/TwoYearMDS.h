#ifndef TWOYEARMDS_H
#define TWOYEARMDS_H

#include "MonthlyDepositScheme.h"

class TwoYearMDS : public MonthlyDepositScheme
{
private:
    float maximumInterest;
public:
    TwoYearMDS(string name,float initial,float monthlyDeposit,float maxInterest);
    float getMaximumInterest() const;
    void setMaximumInterest(float maxInterest);
};

#endif
