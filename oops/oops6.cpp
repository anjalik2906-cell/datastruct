#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string name;
    double balance;

public:
    
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance = balance + amount;
            cout << "Amount Deposited Successfully.\n";
        }
        else
        {
            cout << "Invalid Deposit Amount.\n";
        }
    }

    
    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid Withdrawal Amount.\n";
        }
        else if (amount > balance)
        {
            cout << "Insufficient Balance.\n";
        }
        else
        {
            balance = balance - amount;
            cout << "Amount Withdrawn Successfully.\n";
        }
    }

    
    void display()
    {
        cout << "\n--- Account Details ---\n";
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    double amount;

    account.createAccount();

    cout << "\nEnter amount to deposit: ";
    cin >> amount;
    account.deposit(amount);

    cout << "\nEnter amount to withdraw: ";
    cin >> amount;
    account.withdraw(amount);

    account.display();

    return 0;
}