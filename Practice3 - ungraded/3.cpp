/*Write a program that defines a class Book with private members title
and price. Implement setters and getters for both members, and print
the details of the book object.*/

#include<iostream>
using namespace std; 

class Book{
    private: 
    string title;
    int price;

    public:
    //setting title and price
    void set_value(string t,int p){
        title = t;
        price = p;
    }

    void get_value(void){
        cout<<"Book name:"<<title<<endl;
        cout<<"Price:"<<price<<endl;
    }
};

int main(){
    Book b1;
    string title; int price;
    cout<<"Enter book name:";
    getline(cin,title); //Allows spaces for string input
    cout<<"Enter price:";
    cin>>price;
    b1.set_value(title,price);
    b1.get_value();
}