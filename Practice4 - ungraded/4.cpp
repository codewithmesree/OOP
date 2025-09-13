/*Implement a class BankAccount with data members accountNumber,
balance. Write multiple constructors for:
• Default initialization.
• Initialization with account number only.
• Initialization with account number and balance.*/

#include<iostream>
using namespace std; 

class BankAccount{
    private:
        int AccountNumber;
        float balance; 
    
        public: 
            //default 
            BankAccount(){
                AccountNumber= 1003456732;
                balance = 3000.00;
            }

            //parameterised constructors 
            BankAccount(int acc, float bal){
                AccountNumber=acc;
                balance=bal;
            }

            BankAccount(int acc){
                AccountNumber=acc;
                balance=0.0;
                cout<<"Account Number:"<<acc<<endl;
            }

            void display(){
                cout<<"Here are the details";
                cout<<"Account Number:"<<AccountNumber<<endl<<"Balance:"<<balance<<endl;
            }
};

int main(){
    BankAccount b1;
    b1.display();
    BankAccount b2(10003278,5000.0);
    b2.display();
    BankAccount b3(1000978654);
    b3.display();
    return 0; 
}