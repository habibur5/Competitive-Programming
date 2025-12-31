#include <bits/stdc++.h>
using namespace std;

vector<vector<int>>sub;

void generate(vector<int> &subset, int i, vector<int> &actA){
    if(i==actA.size()){
        sub.push_back(subset);
        return;
    }
    subset.push_back(actA[i]);
    generate(subset, i+1, actA);
    subset.pop_back();
    generate(subset,i+1,actA);
    //subset.pop_back();
    
}
int main(){
    vector<int> arr = {1,2,3};
    /*     for(auto s:arr){
        cout<<s<<" ";
    }
    cout<<endl; */
    vector<int>empty;
    generate(empty, 0, arr);

    for(auto it:sub){
        for(auto ele:it){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}