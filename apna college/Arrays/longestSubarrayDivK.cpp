#include <bits/stdc++.h>
using namespace std;

// https://www.geeksforgeeks.org/problems/longest-subarray-with-sum-divisible-by-k1259/1


//  got tle error need optimization
int longestSubarrayDivK2( vector<int> &arr, int k){
  int res =0;
  for(int i = 0; i<arr.size(); i++ ){
    int sum = 0;
    for(int j = i; j< arr.size(); j++){

      sum = (sum+arr[j]) %k;

      if(sum ==0){
        res = max(res, j-i+1);
      }
    }
  }
  return res;
}

// optimal remider method 


int longestSubarrayDivK( vector<int> &arr, int k){
  int res =0;
  int sum = 0;
  unordered_map<int,int> mp;
  for(int i = 0; i<arr.size(); i++ ){
    sum = ((sum+arr[i])%k + k)%k;

    if(sum == 0){
      res = max(res, i+1);
    }
    if(mp.find(sum) != mp.end()){
      res = max(res, i- mp[sum] );
    }else{
      mp[sum] = i;
    }
  }
  return res;
}





int main(){
  vector<int> arr = {2, 7, 6, 1, 4, 5};
  int k = 3;
  cout<<longestSubarrayDivK(arr, k);
  return 0;
}