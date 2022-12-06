#include <iostream>
#include <vector>

using namespace std;

int main() {

  int arr[10]{};

  arr[0] = 100;
  arr[9] = 1000;

  vector<int> v(arr, arr + sizeof arr / sizeof arr[0]);

  //   print vector
  for (auto i : v) {
    cout << i << endl;
  }
}