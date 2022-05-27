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

int maxSubArray(vector<int> &nums) {
  int best = -1e4;
  int sum = 0;
  
  for(int i=0; i < nums.size(); i++) {
    sum = max(nums[i], sum + nums[i]);
    best = max(best, sum); 
  }
  
  return best; 
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  
  //vector<int> nums = {-2,1,-3,4,-1,2,1,-5,4};
  vector<int> nums = {-1};
  //vector<int> nums = {5,4,-1,7,8};
  cout << maxSubArray(nums) << endl; 
    
  return 0; 
}
