#include<iostream>
#include<string>

using namespace std;

class BankAccount {
private:
    int number;
    string name;
    string type;
    int balance;
    const int min;
    static int totalAccounts;
    static int activeAccounts;
    static float totalSourceTax;

public:
    BankAccount(int num, string nam, string typ, int balanc, const int mi)
        : number(num), name(nam), type(typ), balance(balanc), min(mi) {
        totalAccounts++;
        activeAccounts++;
    }

    ~BankAccount() {
        activeAccounts--;
    }

    void displayall() {
        cout << "Account number: " << number << endl;
        cout << "Account holder: " << name << endl;
        cout << "Account type: " << type << endl;
        cout << "Account balance: " << balance << endl;
    }

    void showBalance() {
        cout << "Current balance is: " << balance << endl;
    }

    void deposit(int b) {
        if (b >= 0)
            balance += b;
        else
            cout << "Invalid" << endl;
    }

    void withdrawal(int b) {
        if (balance - b < min && b >= 0)
            cout << "Invalid" << endl;
        else
            balance -= b;
    }

    void giveInterest(float interestRate = 3) {
        float interest = (balance * interestRate) / 100;
        float sourceTax = interest * .1;
        totalSourceTax += sourceTax;
        balance += (interest - sourceTax);
        cout << "Interest of BDT " << interest - sourceTax << " added after source tax deduction." << endl;
    }

    int get() const {
        return balance;
    }

    static int getTotalAccounts() {
        return totalAccounts;
    }

    static int getActiveAccounts() {
        return activeAccounts;
    }

    static float getTotalSourceTax() {
        return totalSourceTax;
    }

    static void showAccountStats() {
        cout << "Total BankAccounts: " << totalAccounts << endl;
        cout << "Currently active: " << activeAccounts << endl;
        cout << "Total source tax  " << totalSourceTax << endl;
    }
};

int BankAccount::totalAccounts = 0;
int BankAccount::activeAccounts = 0;
float BankAccount::totalSourceTax = 0.0;

BankAccount Larger(const BankAccount &A, const BankAccount &B) {
    if (A.get() > B.get())
        return A;
    else
        return B;
}

int main() {
    BankAccount A(1, "Abrar", "current", 500, 100);
    BankAccount B(2, "Fahim", "savings", 400, 100);

    A.displayall();
    A.showBalance();
    A.deposit(100);
    A.withdrawal(100);
    A.giveInterest();
    BankAccount::showAccountStats();

    BankAccount largerAccount = Larger(A, B);
    cout << "The account with the larger balance belongs to: " << endl;
    largerAccount.displayall();

    return 0;
}
