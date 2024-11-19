#include "TwoYearMDS.h"
#include <iostream>
using namespace std;

TwoYearMDS::TwoYearMDS(string name,float initial,float monthlyDeposit,float maxInterest):MonthlyDepositScheme(name,initial,monthlyDeposit),maximumInterest(maxInterest){}
float TwoYearMDS::getMaximumInterest() const
{
    return maximumInterest;
}
void TwoYearMDS::setMaximumInterest(float maxInterest)
{
    maximumInterest = maxInterest;
}
