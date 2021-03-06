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

int f[1000000];

int solution(vector<int> &a) {
  int maxv = -1;

  int v = 0;
  memset(f, 0, sizeof(f));
  
  for(int e: a) {
    if (e > maxv) maxv = e;
    if (f[e] == 0) {
      f[e] = 1;
      v++;
    }
  }
  
  if (maxv == a.size() && a.size() == v) return 1; 

  return 0; 
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  /*
  int n; cin >> n;
  vector<int> arr;

  for(int i=0; i < n; i++) {
    int b; cin >> b;
    arr.pb(b);
  }
  */
  vector<int> arr = {4,1,2,3};

  cout << solution(arr) << endl; 

  return 0; 
}
