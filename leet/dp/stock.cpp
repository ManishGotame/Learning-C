#include<bits/stdc++.h>

using namespace std;
#define pb push_back
#define mk make_pair
#define f first
#define s second
#define ll long long 
#define ii pair<int,int> 
#define inf 1e9
#define endl '\n'


int maxProfit(vector<int> &prices) {
  int minBuy = inf;
  int profit = 0;

  for(int i=0; i < prices.size(); i++) {
    minBuy = min(minBuy, prices[i]);
    profit = max(profit, prices[i] - minBuy);
  }

  return profit;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  vector<int> v = {7,1,5,3,6,4};
  //vector<int> v = {7,6,4,3,1};

  cout << maxProfit(v);

  return 0; 
}
