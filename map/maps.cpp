#include <bits/stdc++.h>
using namespace std;
int main(){
    map <int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";
    m.insert({4,"afg"});
    auto it = m.find(3);
    if(it == m.end()){
        cout<< "No value";

    }else{
        cout<< (it->first)<<" "<<(it->second)<<endl;
    }

    return 0;
}