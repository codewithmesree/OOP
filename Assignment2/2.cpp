/*Design a class that mimics a dictionary or map functionality — where you
can store key-value pairs, search for a key, and display all pairs. Explain why
encapsulation is important in this implementation.*/

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Dictionary {
private:
    vector<string> keys;
    vector<int> values;

public:
    //  Member Function to Add a Key-Value Pair 
    void add(string key, int value) {
        keys.push_back(key);
        values.push_back(value);
        cout << "Added: Key='" << key << "', Value=" << value << endl;
    }

    //  Member Function to Search for a Key 
    int search(string key) {
        for (int i = 0; i < keys.size(); ++i) {
            if (keys[i] == key) {
                return values[i];
            }
        }
        cout << "Key '" << key << "' not found." << endl;
        return -1;
    }

    // Member Function to Display All Pairs
    void displayAll() {
        cout << " Dictionary Contents " << endl;
        if (keys.empty()) {
            cout << "Dictionary is empty." << endl;
            return;
        }
        for (int i = 0; i < keys.size(); ++i) {
            cout << "Key: " << keys[i] << ", Value: " << values[i] << endl;
        }
    }
};

int main() {
    Dictionary d1;
    d1.add("apple", 5);
    d1.add("banana", 10);
    d1.add("cherry", 15);
    d1.displayAll();
    cout << "Searching for 'banana' " << endl;
    int bananaValue = d1.search("banana");
    cout << "The value for 'banana' is: " << bananaValue << endl;
    cout << "Searching for 'grape' " << endl;
    int grapeValue = d1.search("grape"); 
    return 0;
}