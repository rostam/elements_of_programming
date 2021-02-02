#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

double BuyAndSellStockOnce(const vector<int>& v) {
  double min_price_so_far=numeric_limits<int>::max() , max_profit = 0;
  for(double price : v) {
    double max_profit_sell_today = price - min_price_so_far;
    max_profit = max(max_profit, max_profit_sell_today);
    min_price_so_far = min(min_price_so_far,price);
  }
  return max_profit;
}

int main() {
  vector<int> v = {310, 315, 275, 295, 260, 270, 290, 230, 255, 250};
  cout << BuyAndSellStockOnce(v);
}
