#include<bits/stdc++.h>

using namespace std;

int main() {
  // convert number to string 
  string a = "manish";
  
  stringstream nts;

  nts << "5";
  int v;
  nts >> v;
  v = v * 5;
  cout << v << endl; 
  
  stringstream stn;
  stn << v; 
  string nv;
  stn >> nv; 
  
  cout << nv << endl; 
  

  return 0; 
}
