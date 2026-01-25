#include <bits/stdc++.h>
using namespace std;
void subsets(vector<int> &v, vector<int>sub, int i){

  if(i == v.size()){
    for(int i = 0; i<sub.size(); i++){
      cout<< sub[i] <<" ";
    }
    cout<<endl;
    return;
  }

  // include
  sub.push_back(v[i]);
  subsets(v, sub, i+1);
  
  sub.pop_back(); // backttracking

  //exclude
  subsets(v, sub, i+1);
}
int main(){
 vector<int>v =  {1, 2, 3,4};
 vector<int>sub = {};

  subsets(v, sub, 0);
  
  // buriteforce approch/ native approch

  /*
    There are total 2^ n subsets. The idea is to generate a loop from 0 to 2^n - 1. For every number, 
    pick all array elements corresponding to 1s in the binary representation of the current number. 
   */


  //  using recursion


  
  return 0;
}