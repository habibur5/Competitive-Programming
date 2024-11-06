#include <bits/stdc++.h>
using namespace std;
void Print(multiset<string> &s){
    // cout<<
}
int main(){
    multiset<string> s;//duplicate allowed
    s.insert("abc");
    s.insert("bca");
    s.insert("tra");
    auto it = s.find("abc");
    if(it != s.end()){
        s.erase(it);
    
    }


    return 0;
}