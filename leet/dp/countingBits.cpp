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

vector<int> countBits(int n) {
  vector<int> ans;

  for(int i=0;i <=n; i++) {
    int v = 0; 
    for(int j=31; j >=0; j--) {
      if (i & (1<<j)) v++; 
    }
    ans.pb(v);
  }

  return ans;
}
 

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n=2;

  vector<int> ans = countBits(n);

  for(int each: ans) cout << each << " ";
  cout << endl; 

  return 0; 
}
