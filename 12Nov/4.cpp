//find the maximum value of an array 
#include<iostream>
using namespace std;
#define max(x,y) (x>y? x:y)

int main(){
    int arr[5];
    for(int i=0;i<5;i++){
        cout<<"Enter a number:";
        cin>>arr[i];
    }

    int maximum = arr[0];   //assume arr[0] is the maximum element
    for(int i=1;i<5;i++){
        maximum = max(maximum,arr[i]);
    }

    cout<<"The largest element is: "<<maximum<<endl;
    return 0;
}