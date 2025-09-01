/*Write a class Car with private members brand and model. Provide
setter and getter methods. In main(), create an array of cars and use
the methods to assign and print their values.*/

#include<iostream>
using namespace std;

class Car{
    private:
    string brand,model;

    public:
    void set_value(string br, string mod){
        br=brand;
        mod=model;
    }

    void get_value(string brand, string model){
        cout<<"Brand::"<<brand<<endl<<"Model:"<<model<<endl;
    }
};

int main(){
    int n;
    cout<<"Enter number of cars:";
    Car cars[n];
    string brand,model;

    for(int i=0;i<n;i++){
        cout<<"Enter brand of car "<<i+1<<":"<<endl;
        cin>>brand;
        cout<<"Enter model of car "<<i+1<<":"<<endl;
        cin>>model;

        cars[i].set_value(brand,model);
    }

    cout << "Car Details:"<<endl;
    for (int i = 0; i < n; i++) {
        cout << "Car " << i + 1 << " -> ";
        cars[i].get_value(brand,model);
    }

    return 0;
}