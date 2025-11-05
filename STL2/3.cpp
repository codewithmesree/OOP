#include<iostream>
#include<map>
using namespace std; 
int main(){
    char arr[] = {'a','b','b','c','c','c'};
    map<int,int>mp;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<n;j++){
        mp[arr[j]]+=1;
    }

    for(auto k:mp){
        //k.first gives key, k.second gives value
        cout<<char(k.first)<<" appears "<<k.second<<" times "<<endl;  
    }
    return 0;
}