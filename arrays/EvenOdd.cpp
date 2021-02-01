#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void EvenOdd(vector<int>& v) {
  int next_even = 0, next_odd = v.size() - 1;
  while(next_even < next_odd) {
    if (v[next_even] % 2 ==0) next_even++;
    else swap(v[next_even], v[next_odd--]);
  }
}

int main() {
  vector<int> v = {1,2,3,4,5,6};
  EvenOdd(v);
  for(int i=0;i < v.size();i++) cout << v[i] << endl;
}
