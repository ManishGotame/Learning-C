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

bool isSubsequence(string s, string t) {
  int pos1 = 0;

  for(int i=0; i < t.size(); i++) {
    if (t[i] == s[pos1]) pos1++;
  }
  
  if (pos1 == s.size()) return true;
  return false; 
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);


  cout << isSubsequence("axc", "ahbgdc") << endl; 
  return 0; 
}
