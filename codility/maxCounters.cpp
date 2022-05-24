// TODO: UNSOLVED

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

vector<int> solution(int N, vector<int> &a) {
  vector<int> fans;
  int ans[N];
  int mv = 1;
  int s = 0; 
  memset(ans, 0, sizeof(ans));
  
  for(int e: a) {
    if (e >=1 and e <=N) {
      ans[e-1]++;
      mv = e-1; 
    } else if (e == N + 1) {
      s = ans[mv];
      ans[mv] = 0; 
    }
  }

  cout << s << endl;
  for(int i=0; i < N; i++) cout << ans[i] << " ";
  cout << endl; 
  
  for(int i=0; i < N; i++) fans.pb(ans[i] + s);
  
  for(int i=0; i < N; i++) cout << fans[i] << " ";


  return fans;
}

vector<int> solution2(int N, vector<int> &a) {
  int ans[N];
  int maxV = 1;
  memset(ans, 0, sizeof(ans));
  int allV = 0;

  for(int e: a) {
    if (e >= 1 and e <= N) {
      ans[e-1]++;
      maxV = ans[e-1] + 1;
    } else if (e == N + 1){
      memset(ans, 0, sizeof(ans));

      allV = maxV - 1;
      if (allV == 0) allV++;
    }
  }
  
  vector<int> fans;
  for(int i=0; i < N; i++) fans.pb(ans[i] + allV);
  
  return fans; 
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
  vector<int> arr = {3,4,4,6,1,4,4};

  vector<int> sol = solution(5, arr); 

  return 0; 
}
