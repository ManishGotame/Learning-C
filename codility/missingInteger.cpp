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
  int sm= 1000001;
  int lg= -1;

  for(int e: a) {
    if (e >= 0) {
      // greater than or equal to = 0
      sm = min(1000001, e);
      lg = max(lg, e);
      f[e]++; 
    } 
  }
  
  // single digit
  if (sm == lg) {
    return sm + 1;
  }

  for(int i=sm; i <= lg; i++) {
    if (f[i] == 0) return i; 
  }

  return 1; 
}


int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  //vector<int> arr = {1,3,6,4,1,2};
  vector<int> arr = {-1,-3};

  cout << solution(arr) << endl; 

  return 0; 
}
