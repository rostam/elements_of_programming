#include <iostream>

using namespace std;

int main() {
  int arr[9] = {1, 4, 1, 4, 2, 1, 3, 5, 6};
  for(int i=1; i <= 10;i++) {
    int num = 0;
    for(int a : arr) {
      if(a >= i) {
	num++;
      }
    }
    if(num < i) {
      cout << i - 1;
      break;
    }
  }
  return 0;
}
