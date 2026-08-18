#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    void setDetails(int accNo, double initialBalance)
    {
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Amount deposited successfully." << endl;
    }

    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    void display()
    {
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;

    account.setDetails(101, 5000);

    account.display();

    account.deposit(2000);
    account.display();

    account.withdraw(1500);
    account.display();

    return 0;
}