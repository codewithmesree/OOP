//Print all odd numbers between 1 and 50 using a while loop.
#include <iostream>
using namespace std;
int main() {
    int n=1;
    while(n<=50){
        if(n%2!=0){
            cout<<n<<endl;
        }
        n+=1;
    }
    return 0;
}