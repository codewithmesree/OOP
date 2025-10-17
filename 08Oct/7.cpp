#include<iostream>
using namespace std;

class base{
public:
    virtual void print(){
        cout<<"welcome from base class"<<endl;
    }

    virtual ~base(){ // Make destructor virtual for proper cleanup
        cout<<"destructor from base"<<endl;
    }
};

class derived : public base{
public:
    void print(){
        cout<<"welcome from derived class"<<endl;
    }

    ~derived(){
        cout<<"destructor from derived"<<endl;
    }

    virtual void get_derived(){ // Add get_derived to derived
        cout<<"this is from derived class"<<endl;
    }
};

class derived2 : public derived{
public:
    void print(){
        cout<<"welcome from derived2 class"<<endl;
    }
    void get_derived(){
        cout<<"this is from derived2 class"<<endl;
    }
}; // <-- Added missing semicolon here

int main(){
    base b;
    base* bptr;
    bptr = &b;
    derived d;
    derived* dptr;
    dptr = &d;
    derived2 d2;
    derived2* d2ptr = &d2;

    // bptr = (base*)dptr; // Not needed, dptr already points to derived
    dptr->get_derived();
    // bptr->get_derived(); // Error: base has no get_derived
    // dptr->get_derived(); // Already called above
    d2ptr->get_derived();
    return 0;
}


/* Output without virtual keyword
    welcome from base class   
    welcome from derived class
    welcome from base class   
    welcome from derived class
    welcome from base class   
*/

/*Output with virtual keyword
    welcome from base class
    welcome from derived class
    welcome from base class
    welcome from derived class
    welcome from derived class
*/

/*Output after using (derived*)
    welcome from base class
    welcome from derived class
    welcome from base class
    welcome from derived class
    welcome from base class  
*/