#include <bits/stdc++.h>
using namespace std;
int main(){
   vector<int> arr = {11, 15, 6, 8, 9, 10};
   unordered_set<int> s;
    int target = 16;
    int n = arr.size();
    /* for(int i = 0; i<n; i++){
        int complement =  target - arr[i];
        if(s.find(complement) != s.end()){
            cout << "Pair found (" << arr[i] << ", " << complement << ")\n";
            return 0;
        }
        s.insert(arr[i]);
    }
    cout << "No such pair found\n"; */


    // another approach
    int left = 0, right = n - 1;
    // find the pivot point
    for(int i = 0; i<n-1; i++){
      if(arr[i]> arr[i+1]){
        right = i;
        left = (i+1)%n;
      }
    }

    while(left !=right){
      if(arr[left] + arr[right] == target) {
        cout<<"found"<<endl;
        return 0;
      }
      if(arr[left] + arr[right] < target){
        left = (left+1)%n;
      }
      else{
        right = (right-1 + n)%n;
      }
    }

    cout<<"not found"<<endl;
  return 0;
}