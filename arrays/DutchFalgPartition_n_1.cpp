#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void DutchFlagPartition(vector<int>& A, int index) {
  int pivot = A[index];
  int smaller = 0;
  for (int i=0;i<A.size();++i) {
    if(A[i] < pivot) {
	swap(A[i],A[smaller++]);
    }
  }

  int larger = A.size() - 1;
  for(int i = A.size()-1;i>0;--i) {
    if(A[i] > pivot) {
	swap(A[i], A[larger--]);
    }
  }
}

int main() {
  vector<int> A = {1, 5,3,9 ,6,2 };
  int i = 4;
  DutchFlagPartition(A,i);
  for(int i=0;i < A.size();i++)
    cout << A[i] << " ";
}
