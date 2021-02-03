#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<int> GeneratePrimes(int n) {
  int ind = 2;
  vector<bool> all(n + 1, true);
  vector<int> primes; 
  all[0] = all[1] = false;
  for(int i=2;i <= n;++i) {
    if(all[i]) {
      primes.emplace_back(i);
      for (int j=i*2;j<=n;j+=i) {
        all[j] = false;
      }
    }
  }
  return primes;
}

int main() {
  vector<int> V = GeneratePrimes(18);
  for(int i=0;i < V.size();i++)
    cout << V[i] << " ";
}
