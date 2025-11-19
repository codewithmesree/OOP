#include<iostream>

class base1{
    public:
        ~base1() {std::cout << "~Base()1\n";}
};

class derived1: public base1{
    public:
        ~derived1() {std::cout << "~Derived()1\n";}
};

class base2{
    public:
        ~base2() {std::cout << "~Base()2\n";}
};

class derived2: public base2{
    public:
        ~derived2() {std::cout << "~Derived()2\n";}
};

int main(){
    base1*b1=new derived1;
    delete b1;  //undefined behavior
    base2*b2=new derived2;
    delete b2;  //correctly calls derived class destructor
    return 0;
}

/* output with virtual:
    ~Base()1
    ~Derived()2
    ~Base()2

output without virtual:
    ~Base()1    
    ~Base()2

*/