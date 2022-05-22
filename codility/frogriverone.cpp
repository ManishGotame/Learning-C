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

int solution(int X, vector<int> &A) {
  int v = 0;
  memset(f, 0, sizeof(f));

  for(int i=0 ; i< A.size(); i++) {
    if (f[A[i]] == 0) {
      v++;
      f[A[i]] = 1;
    } 
    
    if (v >= X) return i;  
  }

  return -1; 
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
  vector<int> arr = {1, 3, 1, 3, 2, 1, 3};

  cout << solution(3, arr) << endl; 

  return 0; 
}
