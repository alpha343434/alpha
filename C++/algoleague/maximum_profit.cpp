#include <bits/stdc++.h>

using namespace std;

int maxProfit(vector<int> prices) {
  int min_price=INT_MAX;
  int max_profit=0;

  for (int price:prices) {
    min_price = min(min_price, price); 
    max_profit = max(max_profit, price - min_price);
  }

  return max_profit;
}

int main() {
  int n;
  cin >>n;

  vector<int> prices(n);
  for (int i=0; i<n; i++) {
    cin >>prices[i];
  }

  cout <<maxProfit(prices);
  return 0;
}
