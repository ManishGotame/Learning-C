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

// stupid solution here

vector<int> coins = {1,3,5,10};
int small[10000000];

int solution(int x) {
  if (x < 0) return inf;
  if (x == 0) return 0;
  if (small[x] != inf) return small[x];

  int best = inf;

  for(int each: coins) {
    best = min(best, solution(x-each)+1);   
  }
  
  small[x] = best; 
  return best; 
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  for(int i=0; i < 10000000; i++) small[i] = inf;

  int n; cin >> n;
  
  cout << solution(n) << endl; 


  return 0; 
}
