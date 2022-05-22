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


int solution(int X, int Y, int D) {
  if (X == Y) return 0;

  int diff = Y - X;
  float val = (float) diff / D;

  if (int(val) != val) return val + 1;
  else return val; 


  return 0; 
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  int a, b, c;
  cin >> a >> b >> c;

  cout << solution(a,b,c) << "\n"; 

  return 0; 
}
