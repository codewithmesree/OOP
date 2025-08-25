//Find the sum of the first n natural numbers.
#include<iostream>
using namespace std;
int main(){
    int sum=0,n;
    cout<<"Enter the number of terms you want the sum for:";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<"The sum of "<<n<<" number of terms is "<<sum;
}
