#include <iostream>

using namespace std;

int main() {
  int num1{13};
  int num2{5};

  num1 = 5;
  num2 = 0;

  num2 = num1;

  cout << "num1 is: " << num1 << endl;
  cout << "num2 is: " << num2 << endl;
}