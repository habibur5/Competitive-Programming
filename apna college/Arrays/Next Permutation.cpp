#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> nums = {2,3,1};

    int l = nums.size();
    int pivot = -1;

    // Step 1: find pivot
    for(int i = l - 2; i >= 0; i--){
        if(nums[i] < nums[i+1]){
            pivot = i;
            break;
        }
    }

    // Step 2: if pivot found, find just bigger and swap
    if(pivot != -1){
        for(int j = l - 1; j > pivot; j--){
            if(nums[j] > nums[pivot]){
                swap(nums[j], nums[pivot]);
                break;
            }
        }
    }

    // Step 3: reverse right part
    reverse(nums.begin() + pivot + 1, nums.end());

    // print result
    for(int x : nums)
        cout << x << " ";

    return 0;
}
