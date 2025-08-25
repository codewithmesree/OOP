//calculate simple interest 
#include<iostream>
using namespace std;
int main(){
    float p,t,r;
    cout<<"Enter P,T and R:";
    cin>>p>>t>>r;
    float SI = (p*t*r)/100;
    cout<<"The simple interest is:"<<SI;
    return 0;
}