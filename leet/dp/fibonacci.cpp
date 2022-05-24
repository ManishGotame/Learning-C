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

int dp[35];
int found[35];

int fib(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  if (found[n] == 1) return dp[n]; 

  int val = fib(n-1) + fib(n-2); 
  
  found[n] = 1;
  dp[n] = val; 
  return val; 
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int n = 30;

  cout << fib(n) << endl; 
  return 0; 
}
