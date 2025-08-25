//Find the sum of the first N natural numbers (input N) using a for loop.
#include <iostream>
using namespace std;
int main() {
    int n,sum=0; //defining var
    cout<<"Enter number of terms:";
    cin>>n;
    for(int i=0;i<=n;i++){
        sum+=i;  //finding sum till n number of nos
    }
    cout<<"The sum is: "<<sum<<endl;
    return 0;
}