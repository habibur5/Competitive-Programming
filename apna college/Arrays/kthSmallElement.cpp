#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> arr = {10, 5, 4, 3, 48, 6, 2, 33, 53, 10};
  
  int k = 4;
  priority_queue<int> q;
  for(auto num: arr){
    q.push(num);
    if(q.size()> k){
      q.pop();
    }
  }

  cout<<q.top()<<"\n";
  return 0;
}