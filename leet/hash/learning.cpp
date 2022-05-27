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

vector<int> nums[100];

/*
 * [2] = {1,3,4}
 *
 * */

int vis[100]; 


void dfs(int n) {
  if (vis[n]) return;
  vis[n] = 1; 
  
  for(auto each: nums[n]) {
    dfs(each); 
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
 

  return 0; 
}
