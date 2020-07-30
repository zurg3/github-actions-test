#include <iostream>
using namespace std;

int main() {
  cout << "Hello, World!" << endl;
  
  #if defined(WIN32) || defined(_WIN32)
    cin.get();
  #endif
  
  return 0;
}
