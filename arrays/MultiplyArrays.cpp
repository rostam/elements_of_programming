#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> mul(const vector<int>& v1, const vector<int>& v2) {
  vector<int> res(v1.size() + v2.size(), 0);
  for (int i=v1.size()-1;i>=0;--i) {
    for (int j=v2.size()-1;j>=0;--j) {
      int tmp = v1[i]*v2[j];
      res[i+j+1] += tmp;
      res[i+j] += res[i+j+1]/10;
      res[i+j+1] %= 10;
    }
  }
  res = {find_if_not(res.begin(),res.end(),[](int a){return a==0;}),res.end()};
  return res;
}


int main() {
  vector<int> v1({1,2,3,4});
  vector<int> v2({5,6,7,8});
  vector<int> res = mul(v1,v2);
  for(int i=0;i<res.size();i++) {
    cout << res[i] <<" ";
  }
  return 0;
}
