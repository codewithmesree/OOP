#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

  cars.push_back("Toyota");

  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}