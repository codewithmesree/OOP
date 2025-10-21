#include<iostream>
using namespace std;

class A{
    public:
        int a;
};

class B{
    public:
        int b;
};

/*casting of unrelated class won't work - only works 
    with inherited class , so this program won't give o/p*/
int main(){
    A*oa;
    B*ob;
    //oa = ob; //pointers does not support implicit casting
    oa = (A*)ob;
    oa->a = 4;
    cout<<"Value of A: "<<oa->a<<endl;
    return 0;
}