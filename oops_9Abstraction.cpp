#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    // Hidden details (implementation and sensitive data)
    string accountHolderName;
    double balance;
public:
    // Constructor to initialize account
    BankAccount(string name, double initialBalance) {
        accountHolderName = name;
        balance = initialBalance;
    }
    // Exposed methods to interact with the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: Rs." << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: Rs." << amount << endl;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
    void displayBalance() const {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Current Balance: Rs." << balance << endl;
    }
};
int main() {
    // Create an object of BankAccount
    BankAccount account("Ram", 10000.0);
    // Access account details through exposed methods
    account.displayBalance();
    account.deposit(500.0);
    account.withdraw(300.0);
    account.displayBalance();
    return 0;
}
