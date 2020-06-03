#include <iostream>
#if defined(WIN32) || defined(_WIN32)
  #include <windows.h>
#endif
using namespace std;

int main() {
  int a = 64 * 64;
  
  cout << "Hello, World!" << endl;
  
  cout << a << endl;
  
  return 0;
}
