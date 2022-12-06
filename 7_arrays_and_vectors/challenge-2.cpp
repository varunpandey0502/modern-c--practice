#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec{10, 20, 30, 40, 50};
  vec.at(0) = 100;
  vec.at(vec.size() - 1) = 1000;

  // print first and last element
  cout << "First element: " << vec.at(0) << endl;
  cout << "Last element: " << vec.at(vec.size() - 1) << endl;
}