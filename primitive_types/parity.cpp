#include <iostream>

using namespace std;

short parity(unsigned long long x) {
  short i = 0;
  while(x) {
    i += 1;
    x &= x-1;
  }
  return i;
}


int main() {
  cout << parity(3) << parity(4);
  return 0;
}
