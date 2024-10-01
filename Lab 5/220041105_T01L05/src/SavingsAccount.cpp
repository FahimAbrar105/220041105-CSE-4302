#include "SavingsAccount.h"
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

SavingsAccount::SavingsAccount() : annualInterestRate(0), currentBalance(0), minimumBalance(0) {}

void SavingsAccount::setAccountName(string str)
{
    accountName = str;
}

string SavingsAccount::getAccountName()
{
    return accountName;
}

void SavingsAccount::setAddress(string str)
{
    address = str;
}

string SavingsAccount::getAddress()
{
    return address;
}

void SavingsAccount::setAnnualInterestRate(double a)
{
    annualInterestRate = a;
}

double SavingsAccount::getAnnualInterestRate()
{
    return annualInterestRate;
}

void SavingsAccount::setCurrentBalance(double a)
{
    currentBalance = a;
    updateMinimumBalance();
}

double SavingsAccount::getCurrentBalance()
{
    return currentBalance;
}

void SavingsAccount::deposit(double a)
{
    if (a > 0)
    {
        currentBalance += a;
        updateMinimumBalance();
    }
}

int SavingsAccount::withdraw(double a)
{
    if (a > 0 && a <= currentBalance)
    {
        currentBalance -= a;
        updateMinimumBalance();
        return 1;
    }
    return 0;
}

double SavingsAccount::calculateInterest(int periodInMonths) const
{
    return (minimumBalance * annualInterestRate * periodInMonths) / (12 * 100);
}

void SavingsAccount::disburseInterest(int periodInMonths)
{
    double interest = calculateInterest(periodInMonths);
    deposit(interest);
    updateMinimumBalance();
}

void SavingsAccount::updateMinimumBalance()
{
    if (minimumBalance == 0 || currentBalance < minimumBalance)
        minimumBalance = currentBalance;
}

void EditInformationByKeyboard(SavingsAccount& account)
{
    string name, address;
    double rate, balance;

    cout << "Enter Name: ";
    getline(cin, name);
    account.setAccountName(name);

    cout << "Enter Address: ";
    getline(cin, address);
    account.setAddress(address);

    cout << "Enter Annual Interest Rate: ";
    cin >> rate;
    account.setAnnualInterestRate(rate);

    cout << "Enter Current Balance: ";
    cin >> balance;
    account.setCurrentBalance(balance);
    cin.ignore();
}

void generateInformationRandom(SavingsAccount& account)
{
    const string names[] = {"xfg sdxgf", "sdgft fcxdg", "sdgf srdftg", "sdg srdtfg"};
    const string addresses[] =
    {
        "123 ewrwe werwe sdfssef", "456 sdfsd sdfse werwesr", "789 ewrsd sdfsd Veswdrw", "321 sdfsdf sdfsd sdfsdf"
    };

    int randomIndex = rand() % 4;
    account.setAccountName(names[randomIndex]);
    account.setAddress(addresses[randomIndex]);

    double randomRate = 2+ (rand() % 3) * 0.1;
    account.setAnnualInterestRate(randomRate);

    double randomBalance = 1000+ (rand() % 50000);
    account.setCurrentBalance(randomBalance);
}

void ShowInterestAll(SavingsAccount accounts[])
{
    for (int i = 0; i < 100; i++)
    {
        double interest = accounts[i].calculateInterest(12);
        cout << "Account: " << accounts[i].getAccountName() << ", Interest: " << interest << endl;
    }

    char c;
    cout << "Confirm disbursement(y/n): ";
    cin >> c;
    if (c == 'y')
        for (int i = 0; i < 100; i++)
            accounts[i].disburseInterest(12);
}

void ShowAllAlphabetically(SavingsAccount accounts[])
{
    sort(accounts, accounts + 100, [](SavingsAccount& a1, SavingsAccount& a2)
    {
        return a1.getAccountName() < a2.getAccountName();
    });

    for (int i = 0; i < 100; i++)
        cout << accounts[i].getAccountName() << ": " << accounts[i].getCurrentBalance() << endl;
}
