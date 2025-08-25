//Fibonacci
#include <iostream>
using namespace std;
int main() {
    int a=0,b=1,sum,n;
    cout<<"Enter number of terms:";
    cin>>n;
    cout<<"The Fibonacci Series"<<endl;
    cout<<a<<' '<<b<<' ';
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        cout<<sum<<' ';
        a=b;
        b=sum;
    }
    return 0;
}