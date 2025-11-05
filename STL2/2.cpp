#include<iostream>
#include<map>
using namespace std; 
int main(){
    int arr[] = {1,2,2,3,3,3,4,4,4,4};
    map<int,int>mp;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int j=0;j<n;j++){
        mp[arr[j]]+=1;
    }

    for(auto k:mp){
        //k.first gives key, k.second gives value
        cout<<k.first<<" appears "<<k.second<<" times "<<endl;  
    }
    return 0;
}