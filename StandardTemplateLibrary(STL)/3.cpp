#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};
  cars.pop_back();
  for (string car : cars) {
    cout << car << "\n";
  }
  return 0;
}