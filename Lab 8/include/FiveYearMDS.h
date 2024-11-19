#ifndef FIVEYEARMDS_H
#define FIVEYEARMDS_H
#include "MonthlyDepositScheme.h"

class FiveYearMDS : public MonthlyDepositScheme{
private:
    float maximumInterest;
public:
    FiveYearMDS(string name,float initial,float monthlyDeposit,float maxInterest);
    float getMaximumInterest() const;
    void setMaximumInterest(float maxInterest);
};

#endif
