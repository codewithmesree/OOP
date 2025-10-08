/*Implement a copy constructor to initialize an object using another 
object of the same class.*/

#include<iostream>
using namespace std; 

class Library{
    private:
        int ID;
        int price; 
    public:
        Library(){  //default constructor
            ID = 0;
            price = 0;
        }
        Library(int ID, int price){ //parameterised constructor
            this->ID = ID;
            this->price = price;
        }

        Library(const Library &obj){    //copy constructor
            ID = obj.ID;
            price = obj.price;
        }

         void display(){
            cout<<"Book ID:"<<ID<<endl<<"Book price:"<<price<<endl;
         }
};

int main(){
    Library l1(111, 500);  // calls parameterized constructor
    Library l2 = l1;       // calls copy constructor

    cout << "Object 1:" << endl;
    l1.display();

    cout << "Object 2 (copy of Object 1):" << endl;
    l2.display();

    return 0;
}