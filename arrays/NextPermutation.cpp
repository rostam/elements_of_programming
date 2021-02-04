#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void NextPermutation(vector<int>& perm) {
  auto ind = is_sorted_until(perm.rbegin(), perm.rend());
  if(ind == perm.rend()) return;
  auto least_upper_bound = upper_bound(perm.rbegin(), ind, *ind);
  iter_swap(ind, least_upper_bound);
  reverse(perm.rbegin(),ind);
}

int main() {
  vector<int> v({6,2,1,5,4,3,0});
  NextPermutation(v);
  for(int i=0;i<v.size();i++)
    cout << v[i] << " ";
  return 0;
}
