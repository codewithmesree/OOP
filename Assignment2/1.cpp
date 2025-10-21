/*Create a class that behaves like a simple list in Python. It should 
support adding, removing, displaying, and getting the size of the list. 
Explain why you used constructors and any operator 
overloading (if used).*/

#include<iostream>
#include<vector>
using namespace std; 

class List{
    private:
        vector<int> l1; 
    public:
        List(){
            cout<<"New list created!"<<endl;
        }

        void add(int item) {
        l1.push_back(item); //built-in fn to append
        cout << item << " has been added to the list." << endl;
        }

        void remove(int index) {
        if (index >= 0 && index < l1.size()) {
            cout << l1[index] << " has been removed from index " << index << "." << endl;
            l1.erase(l1.begin() + index);
        } 
        else {
            cout << "Error: Invalid index." << endl;
        }
    }

    void display() {
        cout << "List contents: [ ";
        for (int item : l1) {
            cout << item << " ";
        }
        cout << "]" << endl;
    }

    int getSize() {
        return l1.size(); //returns length
    }
};

int main() {
    List l2;
    l2.add(10);
    l2.add(20);
    l2.add(30);
    l2.display(); 
    cout << "Current size of list: " << l2.getSize() << endl;
    l2.remove(1); 
    l2.display(); 
    cout << "New size of list: " << l2.getSize() << endl;
    return 0; 
}