/*take a string from a user and specifically see how many times each 
characters appears using map*/
#include<iostream>
#include<map>
using namespace std;

int main(){
    string str;
    cout<<"Enter a string:";
    getline(cin,str);
    map<char,int>mp;
    int n = sizeof(str)/sizeof(str[0]);
    
    // Count each character's frequency
    for (char c : str) {
        mp[c]++;
    }

    for(auto k:mp){
        //k.first gives key, k.second gives value
        cout<<char(k.first)<<" appears "<<k.second<<" times "<<endl;  
    }
    return 0;
}
