/*Implement all sorting algorithm (Bubble Sort, Insertion Sort, 
or Selection Sort) using OOP concepts. Use a class and methods for 
sorting, displaying, and inputting data. Explain why object-oriented 
design improves modularity here.*/

#include <iostream>
using namespace std;

class BubbleSort {
private:
    int arr[5] = {64, 34, 25, 12, 22};  // Predefined array
    int n = 5;                          // Number of elements

public:
    void bubbleSort() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
        cout << "Array sorted successfully using Bubble Sort.\n";
    }

    // displaying the elements
    void display() {
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    BubbleSort s; 

    cout << "Before sorting: ";
    s.display();

    s.bubbleSort();

    cout << "After sorting: ";
    s.display();

    return 0;
}
