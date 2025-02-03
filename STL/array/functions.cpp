#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
    }
    // min_element = returns iterator to the min element
    int min = *min_element(v.begin(), v.end());
    cout<<min<<endl;
    // max_element = returns iterator to the max element
    int max = *max_element(v.begin(), v.end());
    cout<<max<<endl;

    // accumulate = sum of all elements returns int
    int sum = accumulate(v.begin(), v.end(),0);
    cout<<sum<<endl;

    // count = number of occurences of a number returns int
    int ct = count(v.begin(), v.end(),6);
    cout<<ct<<endl;

    // find = find the first occurence of a number returns iterator
    auto it = find(v.begin(), v.end(), 6);
    if(it != v.end()){
        cout<<*it<<endl;
    }
    else{
        cout<<"Element Not Found"<<endl;
    }
    // reverse = reverse the array returns void
    reverse(v.begin(), v.end());
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}