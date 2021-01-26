#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> arr({1, 4, 1, 4, 2, 1, 3, 5, 6});
  sort(begin(arr), end(arr));
  int n = arr.size();
  for(int i=0; i < n;i++) {
    if(arr[i] >= n - i) {
      cout << n - i;
      break;
    }
  }
  return 0;
}
