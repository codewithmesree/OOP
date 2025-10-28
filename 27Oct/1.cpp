#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std; 
int main(){
    vector<int> v1(5,9);    //should print 9 five times
    for (int i:v1){
        cout<<i<<endl;
    }

    auto it = v1.begin();   //points to the first element
    cout<<"element is: "<<*it<<endl;
    v1.insert(v1.begin(),45);//inserts at the beginning
    v1.insert(v1.end(),34);//inserts at the end
    v1.insert(v1.begin()+3,43);//inserts at 3rd place after beginning
    v1.insert(v1.end()-2,69);
    for (int i:v1){
        cout<<i<<endl;
    }

    v1.erase(v1.begin());
    v1.front();
    v1.pop_back();
    v1.push_back(23);
    auto it1 = v1.rbegin();
    v1.insert(v1.begin()+3,3,67);//iterator,no of times,element
    for (int i:v1){
        cout<<i<<endl;
    }
    sort(v1.begin(),v1.end());//sorts elements from start to end
    for (int i:v1){
        cout<<i<<endl;
    }

    cout<<"- - - - - - - - - - - - - - - - - - - - - - - - - - -"<<endl;
    set<int> s;
    for(int i:v1){
        s.insert(i);
    }
    cout<<"Set elements "<<endl;
    for(int j:s){
        cout<<j<<endl;
    }
    cout<<"- - - - - - - - - - - - - - - - - -"<<endl;
    v1.assign(s.begin(),s.end());
    for(int j:s){
        cout<<j<<endl;
    }
    cout<<"Size of the vector is "<<v1.size()<<endl;
    cout<<"Is 23 there or not?: "<<bool(*s.find(23))<<endl;
    return 0;
}