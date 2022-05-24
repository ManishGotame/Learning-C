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

int minCostClimbingStairs(vector<int> &cost) {
  int pos = cost.size();
  vector<int> price(pos, 0);
  price[0] = cost[0];
  price[1] = cost[1];

  for(int i=2; i < pos; i++) {
    price[i] = min(price[i-1] + cost[i], price[i-2] + cost[i]);
  }

  return min(price[pos-1], price[pos-2]); 
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  vector<int> arr = {10,15,20};

  cout << minCostClimbingStairs(arr) << endl; 

  return 0; 
}
