#include <bits/stdc++.h>
using namespace std;
int main(){
    int q;
    cin >> q;
    map<string, int> ma;
    while(q--){
        int type;
        string s;
        int m;
        cin >> type;
        if(type == 1){
            cin >> s >> m;
            ma[s] += m;
        }else if(type == 2){
            cin >> s;
            ma[s]=0;
        }else{
            cin >> s;
            cout<<ma[s]<<endl;
        }
    }
    return 0;
}