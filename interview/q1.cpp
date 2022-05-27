#include<bits/stdc++.h>

using namespace std;


int numberOfCarryOperations(int ax, int bx) {
  int a = min(ax,bx);
  int b = max(ax,bx);

  //int smaller = min(a, b);
  
  int c = 0; 
  int carry = 0;
  
  while(true) {
      int xa = a % 10;
      int xb = b % 10;
      int sum = xa + xb + carry;
      carry = 0;

      if (sum == 10) { 
        carry = 1;
        c++; 
      } else if (sum >10) {
         
        int val = sum / 10; 
        
        c += val; 
        carry += val; 
      
      } else carry = 0;

      a = a / 10;
      b = b / 10;

      if (b == 0) break; 
  }

  return c; 
}

int main() {
  int a, b;
  cin >> a >> b;
  //a = 1;
  //b = 99999;

  cout << numberOfCarryOperations(a, b) << endl; 



  return 0; 
}
