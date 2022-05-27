// FAILED
//
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

int maxArea(vector<int> &height) {
  int best = 0; // index
  int p1 = 0;
  int p2 = 1;

  while(p2 <= height.size()) {
    int v = min(height[p2] - height[p1]) * (p2 - p1);

    if (v > best) {
      best = v;
    }
  }

  
  cout << vol << endl; 



  return 0; 
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  vector<int> height = {1,8,6,2,5,4,8,3,7};
  
  cout << maxArea(height) << endl; 
  return 0; 
}
