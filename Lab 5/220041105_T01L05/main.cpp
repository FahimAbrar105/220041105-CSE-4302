#include "SavingsAccount.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void EditInformationByKeyboard(SavingsAccount& account);
void generateInformationRandom(SavingsAccount& account);
void ShowInterestAll(SavingsAccount accounts[]);
void ShowAllAlphabetically(SavingsAccount accounts[]);

int main()
{
    SavingsAccount accounts[100];

    srand(time(0));

    for (int i = 0; i < 5; i++)
        EditInformationByKeyboard(accounts[i]);

    for (int i = 5; i < 100; i++)
        generateInformationRandom(accounts[i]);

    ShowInterestAll(accounts);
    ShowAllAlphabetically(accounts);
}
