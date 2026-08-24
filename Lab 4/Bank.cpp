/*Create a class BankAccount with
members for the account number and
balance. Write methods to deposit and
withdraw money, and to check the
balance.
*/
#include <iostream>
using namespace std;
class BankAccount
{
    private:
        int accountNumber;
        double balance;

    public:
        BankAccount(int accountNumber, double initialBalance = 0.0)
            : accountNumber(accountNumber), balance(initialBalance >= 0.0 ? initialBalance : 0.0) {}

        bool deposit(double amount)
        {
            if (amount <= 0.0)
                return false;

            balance += amount;
            return true;
        }

        bool withdraw(double amount)
        {
            if (amount <= 0.0 || amount > balance)
                return false;

            balance -= amount;
            return true;
        }

        double checkBalance() const
        {
            return balance;
        }
};

int main()
{
    BankAccount account(1001, 500.0);
    account.deposit(250.0);
    account.withdraw(100.0);

    cout << "Account balance: " << account.checkBalance() << endl;
    return 0;
}
