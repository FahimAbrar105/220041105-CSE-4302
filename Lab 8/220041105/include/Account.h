#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<string>

using namespace std;

class Account
{
private:
    string accountNo;
    string accountName;
    float balance;
protected:
    void setAccountNo(string accountNumber);
public:
    Account(string name,float initial);
    void set(string n,float b);
    float get() const;
};

#endif // ACCOUNT_H


