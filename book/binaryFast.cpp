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

string getBinary2(int n) {
  string sa = "";
  
  while(n != 0) {
    int val = n % 2;
    sa = to_string(val) + sa;  
    n = n / 2;
  }
  
  return sa;  
}

void getBinary(int n) {
  for(int i=10; i >=0; i--) {
    if(n & (1<<i)) cout << "1";
    else cout << "0";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int x; cin >> x;
  
  getBinary(x);


  return 0; 
}
