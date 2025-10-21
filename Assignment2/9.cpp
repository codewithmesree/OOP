/*Write a class BankAccount with features like deposit(), withdraw(), and 
display(). Use constructor initialization and show how encapsulation 
prevents invalid access. Explain why data hiding is essential in 
banking systems.*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    string acctholder;
    int acctNo;
    double balance;

public:
    // Constructor with initialization
    BankAccount(string acctholder, int acctNo, double balance) {
        this->acctholder=acctholder;
        this->acctNo=acctNo;
        this->balance=balance;

        if (balance >= 0)
            this->balance = balance;
        else {
            cout << "Invalid initial balance! Setting to 0.\n";
            balance = 0;
        }
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid or insufficient balance!" << endl;
        }
    }

    // Function to display account details
    void display() {
        cout << "\n--- Account Details ---" << endl;
        cout << "Account Holder: " << acctholder << endl;
        cout << "Account Number: " << acctNo << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    // Creating an object using constructor initialization
    BankAccount account1("Sree Darshini", 123456, 5000);

    account1.display();
    account1.deposit(1500);
    account1.withdraw(2000);
    account1.display();

    return 0;
}
