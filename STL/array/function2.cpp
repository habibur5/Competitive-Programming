#include <bits/stdc++.h>
using namespace std;
bool is_positive(int x){
    return x>0;
}
int main(){
    // lambda function
    auto sum = [](int x, int y){return x+y;};
    //cout<<sum(2,3)<<endl;

    vector<int> v = {1,2,3,4,5,4};
    cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<endl;

    cout<<all_of(v.begin(),v.end(),is_positive)<<endl; // is all condition true return 1 if true else 0
    cout<<any_of(v.begin(), v.end(), [](int x){return x>0;})<<endl; // is there any condition true return 1 if true else 0
    cout<<none_of(v.begin(), v.end(), [](int x){return x>0;})<<endl; // is there no condition true
    // return 1 if true else 0
    


    return 0;
}