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

  vector<int> v = {2,2,5,2,4,1,3};
  int arr[] = {2,9,1,2,3,6,3,5,6};
  int N = 9;

  // vector sorting
  sort(v.begin(), v.end());

  for(int e : v) cout << e << " ";
  cout << endl; 

  sort(v.rbegin(), v.rend());

  for(int e: v) cout << e << " ";
  cout << endl; 
  // arry sorting
  sort(arr, arr + N);   

  for(int i=0; i < N; i++) {
    cout << arr[i] << " ";
  }  
  
  cout << endl; 

  return 0; 
}
