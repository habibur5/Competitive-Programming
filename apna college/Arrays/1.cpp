
class Solution {
  public:
  
    vector<int> getMinMax(vector<int> &arr) {
        // code here
        sort(arr.begin(), arr.end());
        int n = arr.size();
        vector<int> v = {arr[0], arr[n-1]};
        return v;
        
    }
};