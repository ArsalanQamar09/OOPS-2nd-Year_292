#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNO;
    float balance;

public:
    void createAccount(int acc, float amount)
    {
        accountNO = acc;
        balance = amount;
    }

    void deposit(float amount)
    {
        balance = balance + amount;
        cout << "Money deposited successfully." << endl;
    }

    void withdraw(float amount)
    {
        if (amount > balance)
        {
            cout << "Sorry, insufficient balance!" << endl;
        }
        else if (amount <= 0)
        {
            cout << "Please enter a valid amount." << endl;
        }
        else
        {
            balance = balance - amount;
            cout << "Money withdrawn successfully." << endl;
        }
    }

    void showAccount()
    {
        cout << "\nAccount Number: " << accountNO << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount myAccount;

    myAccount.createAccount(12345, 10000);

    myAccount.showAccount();

    myAccount.deposit(2000);

    myAccount.withdraw(3000);

    myAccount.showAccount();

    return 0;
}