#include <iostream>
using namespace std;

void date_of_birth() {
  int m{};
  int d{};
  int y{};

  cout << "Enter month, date and year of your date of birth separated by "
          "spaces: ";

  cin >> m >> d >> y;

  cout << m << " " << d << " " << y;
}

int main() { date_of_birth(); }