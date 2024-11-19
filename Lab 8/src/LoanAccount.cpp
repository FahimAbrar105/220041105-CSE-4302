#include "LoanAccount.h"
#include<iostream>

using namespace std;

const int LoanAccount::accountPrefix=300;
int LoanAccount::nextAccount=1;

LoanAccount::LoanAccount(string name,float initial,float interest):Account(name,initial),interestRate(interest)
{
    string tempAccountNo=to_string(accountPrefix) + "--" + to_string(nextAccount);
    setAccountNo(tempAccountNo);
    nextAccount++;
}
void LoanAccount::description()
{
    cout<<interestRate<<endl;
    cout<<accountPrefix<<endl;
    cout<<nextAccount<<endl;
}
