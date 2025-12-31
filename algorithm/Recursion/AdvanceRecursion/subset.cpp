#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> allsubsets;
void subsetGenerate(vector<int> &subset,int i, vector<int>&nums){
    //cout<<subset[i]<<endl;
    if(i == nums.size()) {
        allsubsets.push_back(subset);
        return;
    }
    // i th element not include in subset
    subsetGenerate(subset, i+1, nums);
    // ith element in subset
    subset.push_back(nums[i]);
    subsetGenerate(subset,i+1, nums);
    subset.pop_back();
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i = 0; i<n; i++){
        cin>>nums[i];
    }

    vector<int> empty;
    subsetGenerate(empty, 0, nums);

    for(auto subset : allsubsets){
        for(auto ele: subset)
            cout<<ele<<" ";
        cout<<endl;
    }
    return 0;
}