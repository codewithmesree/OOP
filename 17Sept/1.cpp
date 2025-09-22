#include <iostream>
using namespace std;

class vector; // forward declaration

class matrices {
private:
    int arr[2][2];

public:
    matrices(int a, int b, int c, int d) {
        arr[0][0] = a;
        arr[0][1] = b;
        arr[1][0] = c;
        arr[1][1] = d;
    }
    void get_matrices() {
        cout << "The matrix: " << endl
             << arr[0][0] << " " << arr[0][1] << endl
             << arr[1][0] << " " << arr[1][1] << endl;
    }

    // friend declaration (pointers)
    friend vector vector_matrices_sangam(vector *v1, matrices *m1);
};

class vector {
private:
    int arr2[2];

public:
    vector(int a, int b) {
        arr2[0] = a;
        arr2[1] = b;
    }
    void get_vector() {
        cout << "The vector is " << endl
             << arr2[0] << endl
             << arr2[1] << endl;
    }

    // same friend declaration (must match matrices!)
    friend vector vector_matrices_sangam(vector *v1, matrices *m1);
};

// Non-member friend function: matrix × vector
vector vector_matrices_sangam(vector *v1, matrices *m1) {
    vector v2(0, 0);
    v2.arr2[0] = m1->arr[0][0] * v1->arr2[0] + m1->arr[0][1] * v1->arr2[1];
    v2.arr2[1] = m1->arr[1][0] * v1->arr2[0] + m1->arr[1][1] * v1->arr2[1];
    return v2;
}

int main() {
    matrices m1(1, 2, 3, 4);
    m1.get_matrices();

    vector v1(2, 8);
    v1.get_vector();

    vector v3 = vector_matrices_sangam(&v1, &m1);
    cout << "Result of matrix-vector multiplication:" << endl;
    v3.get_vector();

    return 0;
}
