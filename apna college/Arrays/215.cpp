#include <bits/stdc++.h>
using namespace std;
int main(){
    // https://leetcode.com/problems/kth-largest-element-in-an-array/description/
    vector<int> nums = {3,3,3,3,3,3,3,3,3};
                      //1 2 2 3 3 4 5 5 6
    int k = 8;
    
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(int i = 0; i < nums.size(); i++){
        minHeap.push(nums[i]);
        if(minHeap.size() > k){
            minHeap.pop();
        }
    }
    cout << minHeap.top();
        
  return 0;
}