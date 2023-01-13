#include <iostream>

using namespace std;

int main() {

  int num1{10};
  float num2{20.5};

  // type coercion
  int result1{num1 + num2};
  float result2{num1 + num2};

  cout << "result1: " << result1 << endl;
  cout << "result2: " << result2 << endl;
}