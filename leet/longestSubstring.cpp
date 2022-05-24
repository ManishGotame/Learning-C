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

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  string s = " ";

  // solution
  string num = "";
  map<char, int> mp;
  int maxL = 0;
  int cL = 0; 
  int last = -1;

  if (s.size() == 1) return 1; 

  for(int i=0; i < s.size(); i++) {
    char e = s[i];
    mp.insert({e, i});
  }

  for(int i=0; i < s.size(); i++) {
    int v = mp[s[i]];
    
    if (last == -1 or v > last) {
      cL++;
      maxL = max(maxL, cL);
    } else {
      cL = 1;
    } 
    
    last = v;
  }

  cout << maxL << endl; 



  return 0; 
}
