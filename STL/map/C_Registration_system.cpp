#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s[n];
    map<string, int> m;
    map<string, int> dm;
    for(int i = 0; i<n; i++){
        cin >> s[i];
        m[s[i]]++;
    }

    for(int i = 0; i<n; i++){
        
        if(m[s[i]] > 1){
            if(dm[s[i]] ==0){
                cout<<"OK"<<endl;
                dm[s[i]]++;
            }else{
                cout<<s[i]<<dm[s[i]]<<endl;
                dm[s[i]]++;
                m[s[i]]--;
            }
        }else{
            cout<<"OK"<<endl;
        }
    }
    return 0;
}