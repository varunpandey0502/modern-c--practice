#include <iostream>
#include <vector>

using namespace std;

int main() {

  //   vector<char> vowels; // empty vector of characters

  //   vector<char> vowels(5); // 5 elements, all initialized to 0

  //   cout << vowels[0] << endl;

  //   vector<char> vowels{'a', 'e', 'i', 'o', 'u'};

  //   cout << vowels.at(0) << endl; // accessing using the vector syntax
  //   cout << vowels[4] << endl;    // accessing using the array syntax

  vector<int> test_scores{100, 98, 89, 85, 93};

  //   add to array

  test_scores.push_back(20);

  cout << "Test scores last element: " << test_scores.back() << endl;
}
