#include<bits/stdc++.h>

using namespace std;

int main() {
  vector<int> nums = {-1,2,4,-3,5,2,-5,2};
  int best = 0; 
  int sum = 0; 

  for(int i=0; i <nums.size(); i++) {
    sum = max(sum, sum + nums[i]);
    best = max(best, sum);
  }

  cout << best << endl; 

  return 0; 
}
