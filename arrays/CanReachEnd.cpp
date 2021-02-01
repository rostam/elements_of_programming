#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool CanReachEnd(const vector<int>& max_steps) {
  int max_reached_so_far = 0;
  for(int i=0;i<max_steps.size() && max_reached_so_far < max_steps.size();i++) {
    max_reached_so_far = max(max_reached_so_far,max_steps[i] + i);
  }
  return max_reached_so_far >= max_steps.size();
}
