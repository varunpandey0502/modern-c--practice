#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vector1;
  vector<int> vector2;

  vector1.push_back(10);
  vector1.push_back(20);

  cout << "Vector 1" << endl;

  for (int i = 0; i < vector1.size(); i++) {
    cout << vector1.at(i) << endl;
  }

  vector2.push_back(100);
  vector2.push_back(200);

  cout << "Vector 2" << endl;

  for (int i = 0; i < vector2.size(); i++) {
    cout << vector2.at(i) << endl;
  }

  vector<vector<int>> vector_2d;
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  cout << "Vector 2D" << endl;

  for (int i = 0; i < vector_2d.size(); i++) {

    for (int j = 0; j < vector_2d.at(i).size(); j++) {
      cout << vector_2d.at(i).at(j) << " ";
    }

    cout << endl;
  }

  vector1.at(0) = 100;

  for (int i = 0; i < vector_2d.size(); i++) {
    for (int j = 0; j < vector_2d.at(i).size(); j++) {
      cout << vector_2d.at(i).at(j) << " ";
    }

    cout << endl;
  }
}