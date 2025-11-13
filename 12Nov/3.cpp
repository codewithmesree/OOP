#include <iostream>
using namespace std;

inline int square(int x) { 
    return x * x; 
}

class arraydyn {
private:
    int *arr;

public:
    arraydyn() {
        arr = new int[5];   // allocate memory
    }

    ~arraydyn() {
        delete[] arr;       // free memory
    }

    void input() {
        for (int i = 0; i < 5; i++) {
            cout << "Enter a number: ";
            cin >> arr[i];
        }
    }

    int operator[](int index) const {
        return arr[index];
    }
};

int main() {
    arraydyn a1;
    a1.input();
    for (int i = 0; i < 5; i++) {
        cout << "The square of " << a1[i] << " is " << square(a1[i]) << endl;
    }
    return 0;
}
