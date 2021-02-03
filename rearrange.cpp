#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void rearrange(vector<int>& v) {
  for(int i=1;i<v.size();i++) {
    if(i%2 == 0 && v[i-1]<v[i]) {
      swap(v[i-1],v[i]);
    } else if(i%2 == 1 && v[i-1]>v[i]) {
      swap(v[i-1],v[i]);
    }
  }
}

int main() {
  vector<int> v({1,2,3,4,5,6,7});
  rearrange(v);
  for(int i=0;i<v.size();++i)
    cout << v[i];
}
