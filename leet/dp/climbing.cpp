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

int dp[50];
int found[50];

int climbStairs(int n) {
  if (n == 2) return 2;
  if (n == 1) return 1;
  if (found[n]) return dp[n];
 
  int v = 0; 
  for(int e: {1,2}) {
    v = v + climbStairs(n-e); 
  }
  
  found[n] = 1;
  dp[n] = v;
  return v; 
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cout << climbStairs(3); 

  return 0; 
}
