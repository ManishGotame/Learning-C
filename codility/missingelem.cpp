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

int ss[100000];

int solve(vector<int> arr) {
  memset(ss, 0, sizeof(ss));
  for(int e: arr) ss[e] = 1;

  for(int i=1; i <= arr.size()+1; i++) {
    if (ss[i] == 0) return i;
  } 

  return 0; 
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  

  int n; cin >> n;
  vector<int> arr;

  for(int i=0; i < n; i++) {
    int b; cin >> b;
    arr.pb(b);
  }

  cout << solve(arr) << endl; 

  return 0; 
}
