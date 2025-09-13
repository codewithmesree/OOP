/*Design a class Book with attributes title, author, and price. Provide
constructor overloading to allow creating:
• Book with title only.
• Book with title and author.
• Book with title, author, and price.*/

#include<iostream>
using namespace std;

class Book{
    private:
        string title;
        string author;
        int price;
    public:
        //default constructor
        Book(){
            title="unknown";
            author="unknown";
            price=0;
        }

        Book(string title){
            this->title=title;
            author="unknown";
            price=0;
        }

        Book(string title, string author){
            this->title=title;
            this->author=author;
            price=0;
        }

        Book(string title, string author, int price){
            this->title=title;
            this->author=author;
            this->price=price;
        }

        void display(){
            cout<<"Title:"<<this->title<<endl;
            cout<<"Author:"<<this->author<<endl;
            cout<<"Price:"<<this->price<<endl;
        }
};

int main(){
    Book b1;
    b1.display();
    cout<<"-----------------------------------------------------"<<endl;
    Book b2("The Vanity");
    b2.display();
    cout<<"-----------------------------------------------------"<<endl;
    Book b3("Swami and Friends","RK Narayan");
    b3.display();
    cout<<"-----------------------------------------------------"<<endl;
    Book b4("Atomic Habits","James Clear",100);
    b4.display();
    cout<<"-----------------------------------------------------"<<endl;
    return 0; 
}