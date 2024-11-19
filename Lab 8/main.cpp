#include <iostream>
#include "CurrentAccount.h"
#include "SavingsAccount.h"
#include "LoanAccount.h"
#include "MonthlyDepositScheme.h"

using namespace std;

int main()
{
    CurrentAccount a("a",1);
    SavingsAccount b("b", 2, 2);
    LoanAccount c("c", 3, 3);
    MonthlyDepositScheme d("d", 4, 4);

    a.description();
    b.description();
    c.description();
    d.description();

    return 0;
}
