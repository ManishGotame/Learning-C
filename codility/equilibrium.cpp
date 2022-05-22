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


int solution(vector<int> &arr) {
  int p1 = arr[0];
  int p2 = 0;
  int minSum = inf;  
  int diff = 0;
  for(int i=1; i < arr.size(); i++) p2 = p2 + arr[i];
  diff = abs(p2 - p1);
  
  for(int i=1; i < arr.size()-1; i++) {
    p1 = p1 + arr[i];
    p2 = p2 - arr[i];
    diff = min(diff, abs(p2 - p1));
  }

  return diff; 
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

  cout << solution(arr) << endl; 

  return 0; 
}
