#include<iostream>
using namespace std;
namespace mythings{
    int uv;
    void greet(){
        cout<<"Good Afternoon"<<endl;
    }

    class simple{
        int a;
        public:
            simple(int n){
                this->a = n;
            }

            void get_value(){
                cout<<"Value of a: "<<a<<endl;
                
            }
    };

};

int main(){
    mythings::uv=10;
    cout<<"value of uv is "<<mythings::uv<<endl;
    mythings::greet();
    mythings::simple s(6);
    s.get_value();


    return 0;
}