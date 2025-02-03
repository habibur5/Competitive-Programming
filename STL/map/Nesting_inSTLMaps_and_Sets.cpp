#include <bits/stdc++.h>
using namespace std;
int main(){
    map<pair<string, string>, vector<int>> m;
    int n;
    cin>>n;
    cout<<n<<endl;
    while(n--){
        string firstName, lastName;
        int count;
        cin>>firstName>>lastName>>count;
        while (count--)
        {
            int mark;
            cin>>mark;
            m[{firstName,lastName}].push_back(mark);
        }
    }
    for(auto &pr:m){
        auto &fullName  = pr.first;
        auto &marks = pr.second;
        cout<<fullName.first<<" "<<fullName.second<<" "<<marks.size()<<endl;
        for(auto &element : marks){
            cout<<element<<" ";
        }
        cout<<endl;
    }
    return 0;
}