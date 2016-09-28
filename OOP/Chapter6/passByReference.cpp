#include <iostream>
using namespace std;

void foo(int& value) {
  value = 5;
}

int main() {
  int value = 1;
  cout << "Value: " << value << endl;
  foo(value);
  cout << "Value: " << value << endl;

  return 0;
}