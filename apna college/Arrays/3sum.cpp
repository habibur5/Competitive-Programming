#include <bits/stdc++.h>
using namespace std;
int main(){
  vector<int> arr = {-1,0,1,2,-1,-4};
  
  int n = arr.size();
  set<vector<int>>s; // store unique triplates
/* 
  for(int i = 0; i<n; i++){
    for(int j = i+1; j<n; j++){
      for(int k = j+1; k<n; k++){
        if(arr[i] + arr[j]+arr[k] == 0){
           vector<int> trip = {arr[i], arr[j], arr[k] };
           sort(trip.begin(), trip.end());
           if(s.find(trip) == s.end()){
            s.insert(trip);
            ans.push_back(trip);
           }
        }
      }
    }
  } */

  // hashing approch
  /* for(int i = 0; i<n; i++){
    int tar = -arr[i];
    set<int> ts;
    for(int j = i+1; j<n; j++){
      int third = tar-arr[j];
      if(ts.find(third)!= ts.end()){
      vector<int> trip = {arr[i], arr[j], third};
      sort(trip.begin(), trip.end());
      s.insert(trip);  
     }
     ts.insert(arr[j]);
    }
    
  } */

  // vector<vector<int>> ans(s.begin(), s.end());

  vector<vector<int>> ans;

  // two pinter approch
  sort(arr.begin(), arr.end());
  cout<<endl;
  for(int i = 0; i<n; i++){
    if(i>0 && arr[i] == arr[i-1]) continue;
    
    int j = i+1;
    int k = n-1;
    while(j<k){
      int sum = arr[i]+ arr[j] +arr[k];
      if(sum == 0){
        vector<int> trip = {arr[i], arr[j], arr[k]};
        ans.push_back(trip);
        j++, k--; 
        while(j<k && arr[j] == arr[j-1]) j++;
      }
      else if(sum<0)
        j++;
      else
        k--;
    }
  }
  // printing the ans
  for(auto trip: ans){
    for(auto val: trip){
      cout<<val<<" ";
    }
    cout<<endl;
  } 

  
  return 0;
}