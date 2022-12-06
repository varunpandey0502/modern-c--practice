#include <iostream>

using namespace std;

int main() {
  int array[2][2] = {{1, 2}, {3, 4}};

  // print the elements of the array
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }
}
