#include<bits/stdc++.h>
#define s second
#define f first

using namespace std;

vector<pair<int,int> > adj[1000];
int vis[1000];
int dis[1000];
priority_queue<pair<int,int> > q; // priority queue => arranges based on the largest number at the top

void djis(int x) {
  for(int i=0; i < 1000; i++) dis[i] = 100000;
  
  dis[x] = 0;
  q.push({0, x});

  while(!q.empty()) {
    pair<int, int> n = q.top();
    q.pop();
    vis[n.s] = 1;

    for(auto each: adj[n.s]) {
      if (vis[each.f]) continue;

      if (dis[each.f] > dis[n.s] + each.s) {
        dis[each.f] = dis[n.s] + each.s;
        q.push({-dis[each.f], each.f});
      }
    }
  }

  for (int i=0; i < 10; i++) cout << i << " " << dis[i] << endl; 
}

int main() {
  vector<tuple<int,int,int>> data = {
    {4,1, 2},
    {1,2, 3},
    {2,5, 4},
    {2,3, 6},
    {5,6, 1},
    {3,6, 2}
  };

  for(auto each: data) {
    int a, b, w;
    tie(a, b, w) = each;
  
    adj[a].push_back({b,w});
    adj[b].push_back({a,w});
  } 

  djis(4);
  
  return 0; 
}
