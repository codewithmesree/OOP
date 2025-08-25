//Find whether a number is prime or not using sqrt
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool isprime=true;
    cout<<"Enter a number:";
    cin>>n;
    if(n==1||n==0){
        cout<<n<<" is not prime nor composite";
    }
    for(int i=2;sqrt(i)<=n;i++){
        if(n%i==0){
            isprime=false;
            break;
        }
    }
    if(isprime==true){
        cout<<"Number is prime";
    }
    else{
        cout<<"Number is not prime";
    }
}

/* Alternate approach 
    for(int i=2;i*i<=n;i++){
    //continue as usual
    return 0; ----------- important
    }
*/

//write this program for scribe 

/*important - using return 0 instead of break automatically goes to the
next condition, no need to use flag */