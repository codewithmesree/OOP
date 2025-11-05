/*Bank Account with Friend Function and Static Variable
Create a Bank class with:
• Private: accountNumber, balance
• Public: Constructor to initialize, deposit(), and withdraw()
• Static variable: interestRate
• Friend function: applyInterest() to apply interest to the balance*/

#include<iostream>
using namespace std; 

class Bank {
private:
    int accountNumber;
    int balance;
    static int interest; // static variable

public:
    Bank(int accountNumber, int balance) {  // specify parameter types
        this->accountNumber = accountNumber;
        this->balance = balance;
    }

    void withdraw() {
        int withdrawal;
        cout << "Enter amount to withdraw: ";
        cin >> withdrawal;
        balance -= withdrawal;
        cout << "Amount withdrawn: " << withdrawal << endl 
             << "Balance: " << balance << endl;
    }

    void deposit() {
        int deposit;
        cout << "Enter amount to deposit: ";
        cin >> deposit;
        balance += deposit;
        cout << "Amount deposited: " << deposit << endl 
             << "Balance: " << balance << endl;
    }

    friend void interestRate(Bank &b);
};

// define static variable outside the class
int Bank::interest = 8;

void interestRate(Bank &b) {
    int time = 2; // 2 years max
    int simpleInterest = (b.balance * time * Bank::interest) / 100;
    b.balance += simpleInterest;
    cout << "Interest applied: " << simpleInterest << endl
         << "New balance: " << b.balance << endl;
}

int main() {
    Bank b1(1001, 10000);
    b1.deposit();
    b1.withdraw();
    interestRate(b1);  //friend function called
    return 0;
}