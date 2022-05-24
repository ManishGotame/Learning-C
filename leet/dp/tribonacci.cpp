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

int dp[40];
int found[40];

int tribonacci(int n) {
  if (n == 0) return 0;
  if (n == 1) return 1;
  if (n == 2) return 1; 

  if (found[n]) return dp[n];

  int v = tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
  found[n] = 1;
  dp[n] = v; 
  
  return v; 
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  
  int n = 25;

  cout << tribonacci(n) << endl; 
    
  return 0; 
}
