#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount(double initialBalance) 
	{
        this->balance = initialBalance;
    }

    double getBalance()  
	{
        return balance;
    }

    void display()  
	{
        cout << "Balance: $" << balance << endl;
    }

    BankAccount operator+( BankAccount other)  
	{
        double totalBalance = this->balance + other.balance;
        return BankAccount(totalBalance);
    }
};

int main() {
    BankAccount account1(1000);
    BankAccount account2(20000);

    cout << "Account 1 details: ";
    account1.display();

    cout << "Account 2 details: ";
    account2.display();

    BankAccount totalAccount = account1 + account2;
    cout << "Total amount of both accounts: $" << totalAccount.getBalance() << endl;

    return 0;
}

