/*Create a Counter class with:
• Private: count
• Public: Constructor initializes count
• Static variable: totalCount to track all counter objects*/

#include <iostream>
using namespace std;

class Counter {
private:
    int count;                  // individual counter value
    static int totalCount;      // static variable to track total objects

public:
    // Constructor
    Counter(int count) {
        this->count = count;
        totalCount++;           // increment static count for every object created
        cout << "Counter object created with count = " << count << endl;
    }

    // Display function
    void display() {
        cout << "Count of this object: " << count << endl;
    }

    // Static function to show total count of objects
    static void showTotalCount() {
        cout << "Total Counter objects created: " << totalCount << endl;
    }
};

// Initialize static variable
int Counter::totalCount = 0;

int main() {
    Counter c1(5);
    Counter c2(10);
    Counter c3(15);

    c1.display();
    c2.display();
    c3.display();

    // Display total count of objects
    Counter::showTotalCount();

    return 0;
}