#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void DutchFlagPartition(vector<int>& A, int index) {
  int pivot = A[index];
  for (int i=0;i<A.size();++i) {
    for (int j=i+1;j<A.size();++j) {
      if(A[j] < pivot) {
	swap(A[i],A[j]);
	break;
      }
    }
  }

  for(int i = A.size()-1;i>0;--i) {
    for(int j=i-1;j>0;--j) {
      if(A[j] > pivot) {
	swap(A[i], A[j]);
	break;
      }
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
