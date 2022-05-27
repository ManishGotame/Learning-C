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

vector<pair<int,int>> adj[1000];
int vis[1000];
int dis[1000];
queue<int> q;

int bfs(int x) {
  q.push(x);
  vis[x] = 1;
  dis[x] = 0;

  while(!q.size()) {
    int n = q.front();
    q.pop();

    for(auto each: adj[n]) {
      if (vis[each.f]) continue;

      vis[each.f] = 1;
      //dis[each.f] = dis[each.f] + adj[n].s; 
      q.push(each.f);
    }
  }

  for(int i=0; i < 10; i++) {
    cout << i << " " << dis[i] << endl; 
  }
}


void bellman() {
  for(int i=0; i < 1000; i++) dis[i] = inf;

  for(int i=0; i < 5; i++) {
    
  }
  
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  vector<tuple<int,int,int>> data = {
    {4,1, 2},
    {1,2, 3},
    {2,5, 4},
    {2,3, 6},
    {5,6, 1},
    {3,6, 2}
  };

  for(int i=0 ; i< 1000; i++) dis[i] = inf;
  
  dis[4] = 0; 
  for(int i=0; i < data.size()-1; i++) {
    for(auto each: data) {
      int a, b, w; 
      tie(a, b, w) = each;
      
      dis[b] = min(dis[b], dis[a] + w);
    }
  }

  for(auto each: data) {
    int a, b, w;
    tie(a, b, w) = each; 
    cout << a << " " << dis[a] << endl; 
  }



  return 0; 

  for (auto each: data) {
    int a, b, c;
    tie(a, b, c) = each;
    adj[a].push_back({b,c});  
    adj[b].push_back({a,c});  
  }

  //bfs(4); 
  bellman();

  return 0; 
}































