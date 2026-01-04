#include <bits/stdc++.h>
using namespace std;
int main(){
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr)/sizeof(arr[0]);
  // Brute Force Approach
  int max_sum = INT_MIN;
  for(auto start: arr){
    int curr_sum = 0;
    for(int end = start; end <= n; end++){
      curr_sum += arr[end];
      max_sum = max(max_sum, curr_sum);
    }
  }
  cout << "Maximum Subarray Sum is: " << max_sum << endl;

  // Optimal Approach - Kadane's Algorithm
  int curr_sum2 = 0;
  int max_sum2 = INT_MIN;
  for(int i = 0; i < n; i++){
    curr_sum2 += arr[i];
    max_sum2 = max(max_sum2, curr_sum2);
    if(curr_sum2 < 0){
      curr_sum2 = 0;
    }
    
  }
  cout << "Maximum Subarray Sum using Kadane's Algorithm is: " << max_sum2 << endl;
  return 0;
}