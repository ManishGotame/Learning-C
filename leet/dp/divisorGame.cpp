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


vector<int> generate(int numRows) {
  vector<vector<int> > ans = {{1}};
  numRows--; 
  if (numRows == 0) return ans[0];
  ans.push_back({1,1}); 
  if (numRows == 1) return ans[1];
  
  for(int i=2; i <= numRows+1; i++) {
    vector<int> row = {1};
    for(int j=1; j <= i-1; j++) {
      row.push_back(ans[i-1][j-1] + ans[i-1][j]);
    }
    row.push_back(1);
    ans.push_back(row);
  } 

  return ans[numRows+1]; 
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int n = 3; 
  vector<int> ans = generate(n);
  
  for(int each: ans) cout << each << " ";

  return 0; 
}
