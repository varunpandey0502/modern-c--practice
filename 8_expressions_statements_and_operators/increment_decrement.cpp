#include <iostream>

using namespace std;

int main() {

  int counter{10};
  int result{0};

  // pre increment
  //   result = ++counter;

  // post increment
  result = counter++;

  cout << "result: " << result << endl;
  cout << "counter: " << counter << endl;
}