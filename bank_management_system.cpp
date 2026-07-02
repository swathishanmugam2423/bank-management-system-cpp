#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit() {
        float amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;
        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }

    void withdraw() {
        float amount;
        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if (amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn Successfully!\n";
        } else {
            cout << "Insufficient Balance!\n";
        }
    }

    void display() {
        cout << "\n----- Account Details -----\n";
        cout << "Account Holder : " << name << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : " << balance << endl;
    }
};

int main() {
    BankAccount account;

    account.createAccount();
    account.deposit();
    account.withdraw();
    account.display();

    return 0;
}
