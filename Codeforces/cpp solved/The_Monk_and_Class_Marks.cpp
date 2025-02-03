#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    map<int, multiset<string>> m;
    while(t--){
        string name;
        int marks;
        cin>>name>>marks;
        m[marks].insert(name);
    }
    // reverse iterate of map
    auto last_it = --m.end();
    auto first_it = m.begin();
    while(true){
        auto &students = (*last_it).second;
        int mar = (*last_it).first;
        for(auto student : students){
            cout<< student <<" "<<mar<<endl;
        }
        if(last_it == first_it) break;
        last_it--;
    }
    return 0;
}