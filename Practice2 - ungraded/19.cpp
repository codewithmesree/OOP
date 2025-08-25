//Use if-else inside a for loop to print whether numbers from 1 to 20 are even or odd.
#include <iostream>
using namespace std;
int main() {
    for(int i=1;i<=20;i++){
        if(i%2==0){
            cout<<i<<" is even "<<endl;
        }
        else{
            cout<<i<<" is odd"<<endl;
        }
    }
    return 0;
}