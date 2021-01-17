#include <iostream>
using namespace std;

int main() {
  int a = 1;
  int b = 2;
  int c = 3;

  cout << "a" << "|" << &a << "|" << sizeof(a) << " bytes" << endl;
  cout << "b" << "|" << &b << "|" << sizeof(b) << " bytes" << endl;
  cout << "c" << "|" << &c << "|" << sizeof(c) << " bytes" << endl;

  return 0;
}
