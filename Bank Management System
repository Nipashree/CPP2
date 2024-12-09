//Bank Management System


#include <iostream>
#include <string>
using namespace std;

// Class to represent a Bank Account
class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    // Constructor to initialize account details
    BankAccount(string name, int number, double initialBalance)
        : accountHolderName(name), accountNumber(number), balance(initialBalance) {}

    // Method to deposit money
    void deposit(double amount) {
        balance += amount;
        cout << "Deposit successful. New balance: Rs." << balance << endl;
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New balance: Rs." << balance << endl;
        }
    }

    // Method to check balance
    void checkBalance() const {
        cout << "Current balance: Rs." << balance << endl;
    }

    // Method to display account details
    void displayAccountDetails() const {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: Rs." << balance << endl;
    }
};

// Main function to interact with the bank management system
int main() {
    string name;
    int number;
    double initialBalance;

    cout << "Enter account holder name: ";
    getline(cin, name);
    cout << "Enter account number: ";
    cin >> number;
    cout << "Enter initial balance: ";
    cin >> initialBalance;

    // Create a new bank account
    BankAccount account(name, number, initialBalance);
    int choice;
    double amount;

    while (true) {
        cout << "\n1. Deposit Money\n2. Withdraw Money\n3. Check Balance\n4. Display Account Details\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.checkBalance();
                break;
            case 4:
                account.displayAccountDetails();
                break;
            case 5:
                cout << "Thank you for using our bank management system!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }
}
