#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    map<string, int> m;
    while(n--){
        string s;
        cin >> s;
        if(m[s] == 0){
            cout<<"OK"<<endl;
            m[s]++;
        }else{
            cout<<s<<m[s]<<endl;
            m[s]++;
        }
    }
    return 0;
}