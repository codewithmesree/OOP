#include<iostream>
#include<string>

using namespace std; 
class bank_account{
    private:
        string name;    //data members
        float bal;
    
        public:
            void set_value(string n, float b){
                this->name=n;
                this->bal=b;
            }
            void get_value(void){  //methods or member functions
                cout<<"Name:"<<this->name<<endl<<"Balance:"<<this->bal<<endl;
            }

            void deposit(float n1){
                this->bal=this->bal+n1;
            }

            void withdraw(float n1){
                
            }
};

int main(){
    bank_account b1;
    bank_account b2;
    b1.set_value("Sree",10000.00);
    b1.get_value();
    b1.deposit(15000.50);
    b2.set_value("Anne",20000.00);
    b2.get_value();
    b2.deposit(2000.05);
    return 0;
}