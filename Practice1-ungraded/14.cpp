//Print all prime numbers between 1 and 100.
#include<iostream>
using namespace std;
int main(){
    for(int i=2;i<=100;i++){
         bool is_prime=true; //flag
        for(int j=2;j<i;j++){
            if(i%j==0){
                is_prime=false;
                break;
            }
        }
        if(is_prime==true){
            cout<<i<<endl;
        }
        
    }
    return 0;
}
