//Print the multiplication table of a given number using a do-while loop.
#include <iostream>
using namespace std;
int main() {
    int i=1,num,n;
    cout<<"Enter a number:";
    cin>>num;
    cout<<"Enter number of times:";
    cin>>n;
    do{
        cout<<num<<" x "<<i<<" = "<<num*i<<endl;
        i++;
    }
    while(i<=n);
    return 0;
}