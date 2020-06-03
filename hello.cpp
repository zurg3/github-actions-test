#include <iostream>
#if defined(WIN32) || defined(_WIN32)
  #include <windows.h>
#endif
using namespace std;

int main() {
  cout << "Hello, World!" << endl;
  
  return 0;
}
