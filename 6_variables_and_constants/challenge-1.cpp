#include <iostream>
#include <string>

using namespace std;
void employee_profile() {
  string name("");
  int age(0);
  double hourly_wage(23.50);

  cout << "Enter name and age separated by a single space: ";
  cin >> name;
  cin >> age;

  cout << name << " " << age << " " << hourly_wage << endl;
}

int main() { employee_profile(); }
