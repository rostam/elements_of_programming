#include <iostream>
#include <limits>

using namespace std;

int main() {
  cout << "min,max,inf: " << numeric_limits<int>::min() << " " << numeric_limits<int>::max() << " " << numeric_limits<double>::infinity() << endl;
}
