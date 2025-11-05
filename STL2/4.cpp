#include<iostream>
#include<map>
#include <string>
using namespace std;
int main()
{
    map<int, int> mp;
    int arr[] = {1, 1, 2, 2, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4};
    // char arr[] = {'a', 'a', 'b', 'b', 'b', 'b', 'c', 'c', 'c', 'c', 'c', 'c', 'd', 'd'};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int j = 0; j < n; j++)
    {
        mp[arr[j]] += 1;
    }
    mp.insert({4, 6});
    for (auto k : mp)
    {
        cout << k.first << " appears " << k.second << " times." << endl; // k.first=key in dict, k.second=value
    }
    auto it = mp.find(3);
    if (it != mp.end())
    {
        cout << "Key :" << it->first << " value: " << it->second << endl;
    }
    else
    {
        cout << "Not found." << endl;
    }
    return 0;
}