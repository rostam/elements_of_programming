#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

using namespace std;

double BuyAndSellStockTwice(const vector<double>& prices) {
  double max_total_profit = 0;
  vector<double> first_buy_sell_profits(prices.size(),0);
  double min_price_so_far = numeric_limits<double>::max();
  
  for(int i=0;i<prices.size();++i) {
    min_price_so_far = min(min_price_so_far, prices[i]);
    max_total_profit = max(max_total_profit, prices[i] - min_price_so_far);
    first_buy_sell_profits[i] = max_total_profit;
  }

  double max_price_so_far = numeric_limits<double>::min();
  for(int i=prices.size() - 1;i > 0;--i) {
    max_price_so_far = max(max_price_so_far, prices[i]);
    max_total_profit = max(max_total_profit, max_price_so_far - prices[i] + first_buy_sell_profits[i-1]);
  }
  return max_total_profit;
}

int main() {
  vector<double> v = {310, 315, 275, 295, 260, 270, 290, 230, 255, 250};
  cout << BuyAndSellStockTwice(v);
}
