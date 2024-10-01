#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include <string>

using namespace std;

class SavingsAccount
{
private:
    string accountName;
    string address;
    double annualInterestRate;
    double currentBalance;
    double minimumBalance;

public:
    SavingsAccount();
    void setAccountName(string name);
    string getAccountName();
    void setAddress(string addr);
    string getAddress();
    void setAnnualInterestRate(double rate);
    double getAnnualInterestRate();
    double calculateInterest(int periodInMonths) const;
    void disburseInterest(int periodInMonths);
    void deposit(double amount);
    int withdraw(double amount);
    void updateMinimumBalance();
    void setCurrentBalance(double balance);
    double getCurrentBalance();
};

#endif
