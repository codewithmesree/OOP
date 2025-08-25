//divisible b 5 or 7 or both
#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number:";
    cin>>a;
    if(a%5==0){
        cout<<"It is divisible by 5";
    }
    else if(a%7==0){
        cout<<"It is divisible by 7";
    }
    else if((a%5==0)&&(a%7==0)){
        cout<<"It is divisible by 5 and 7";
    }
    else{
        cout<<"It is not divisible by neither";
    }
}