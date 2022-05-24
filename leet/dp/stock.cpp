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

int dp[1000000]; // profit
int found[1000000];
 
// index = bought index? 
int soln(int index, vector<int> &prices) {
  if (found[index]) return dp[index];
  
  int profit = 0; 
    
  for(int i=index+1; i < prices.size(); i++) {
    profit = max(profit, prices[i] - prices[index]);
    int v = soln(i, &prices);
  }
  
  found[index] = 1;
  dp[index] = profit; 
  return profit; 
}


int maxProfit(vector<int> &prices) {
  int mp = 0;  
  for(int i=0; i < prices.size(); i++) {
    mp = max(mp, soln(i, prices)); 
  }
  
  return mp; 
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  //vector<int> v = {7,1,5,3,6,4};
  vector<int> v = {7,6,4,3,1};

  cout << maxProfit(v);

  return 0; 
}
