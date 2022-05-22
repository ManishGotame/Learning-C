#include<bits/stdc++.h>
using namespace std;
/*
 * Input is a list of array: [10, 15, 20]
 * Find out where the emission value can be cut in half efficienctly
 * that it will be less than the total sum half of the emission
 *
 * */

float minGas=0;
int count=0; 
float mv=0;
float cGas = 0;

int solve(vector<float> gas) {
  
  for(int e: gas) cout << e << " ";
  cout << endl;

  // base case
  if (cGas <= minGas) {
    cout << cGas << endl;
    return 0; 
  }

  // find max gas pos
  mv=0;
  int pos = 0;
  
  for(int i=0; i < gas.size(); i++) {
    if (gas[i] > mv) {
      mv = gas[i];
      pos = i; 
    }
  }
  
  cGas = (float) cGas - (gas[pos] / 2);
  gas[pos] = (float) gas[pos] / 2; 
  

  int count = 1;
  return count + solve(gas); 
}


int main() {
  int a;
  vector<float> em;
  cin >> a; 
  cGas =0;

  for(int i=0; i < a; i++) {
    int b; cin >> b;
    cGas = cGas + b;
    em.push_back(b);
  }
  
  // find min gas limit
  minGas = (float) cGas / 2; 
  cout << solve(em) << endl;

  return 0; 
}
