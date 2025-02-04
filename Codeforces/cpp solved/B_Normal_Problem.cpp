/**
* author:  habiburrahman0001
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define sz(a) (int)a.size()
   
 
int main() {
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        reverse(s.begin(), s.end());
        int len = s.size();
        for(int i = 0; i<len; i++){
            if(s[i]=='p') s[i]='q';
            else if(s[i]=='q') s[i] = 'p';
        }
        cout<<s<<endl;
    }
    return 0;
}