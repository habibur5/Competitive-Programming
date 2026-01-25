#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[] = {1, 2, 3, 1};
  int n = sizeof(arr)/sizeof(arr[0]);
  // Brute Force Approach
  bool found = false;
  for(int i = 0; i < n; i++){
    for(int j = i + 1; j < n; j++){
      if(arr[i] == arr[j]){
        found = true;
        break;
      }
    }
    if(found){
      break;
    }
  }
  cout << (found ? "Contains Duplicate" : "No Duplicate") << endl;
  // Optimal Approach using Hashing
  // time complexity: O(n) , space complexity: O(n)
  unordered_set<int> s;
  bool found2 = false;
  for(int i = 0; i < n; i++){
    if(s.find(arr[i]) != s.end()){
      found2 = true;
      break;
    }
    s.insert(arr[i]);
  }
  cout << (found2 ? "Contains Duplicate" : "No Duplicate") << endl;

  // Optimal Approach using Sorting
  // time complexity: O(nlogn)  
  sort(arr, arr + n);
  bool found3 = false;
  for(int i = 1; i < n; i++){
    if(arr[i] == arr[i - 1]){
      found3 = true;
      break;
    }
  }
  cout << (found3 ? "Contains Duplicate" : "No Duplicate") << endl;
  
  return 0;
}