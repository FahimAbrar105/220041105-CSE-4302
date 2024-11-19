#include "FiveYearMDS.h"
#include <iostream>
using namespace std;

FiveYearMDS::FiveYearMDS(string name,float initial,float monthlyDeposit,float maxInterest):MonthlyDepositScheme(name,initial,monthlyDeposit),maximumInterest(maxInterest){}
float FiveYearMDS::getMaximumInterest() const
{
    return maximumInterest;
}
void FiveYearMDS::setMaximumInterest(float maxInterest)
{
    maximumInterest = maxInterest;
}
