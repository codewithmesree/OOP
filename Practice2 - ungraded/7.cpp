//Check whether a number is prime or not using a for loop.
#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if((n==0)||(n==1)){
        cout<<n<<" is neither prime nor composite";
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            cout<<n<<" is not a prime number"<<endl;
            return 0;
        }
    }
    
    //if loop completes:
    cout<<n<<" is a prime number";
    return 0;
}