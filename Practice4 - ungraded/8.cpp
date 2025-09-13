/*Define a class Car with members brand, model, and price. Overload constructors to:
• Initialize brand only.
• Initialize brand and model.
• Initialize brand, model, and price. */

#include<iostream>
using namespace std; 

class Car{
    private:
        string brand; 
        string model;
        int price; 
    public:
    //default constructor
        Car(){
            brand="unknown";
            model="unknown";
            price=0;
        }

        Car(string brand){
            brand="Hyundai";
            model="unknown";
            price=0;
        }

        Car(string brand, string model){
            this->brand=brand;
            this->model=model;
            price=0;
        }

        Car(string brand,string model,int price){
            this->brand=brand;
            this->model=model;
            this->price=price;
        }
        void display(){
            cout<<"Car brand:"<<this->brand<<endl;
            cout<<"Model:"<<this->model<<endl;
            cout<<"Price:"<<this->price<<endl;
        }
};

int main(){
    Car c1("Hyundai");
    c1.display();
    Car c2("Maruti","800");
    c2.display();
    Car c3("Maruti","Suzuki",700000);
    c3.display();
    return 0;
}