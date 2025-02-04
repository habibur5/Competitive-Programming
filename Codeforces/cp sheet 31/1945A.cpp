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
    while (t--){   
        
        int tent = 0;
        int a,b,c;
        cin>>a>>b>>c;
        if(b%3 + c>=3 || b%3==0){
            int s = b+c;
            ll ss = ceil(s/3.0);
            int rem = s%3;
            cout<<a+ss<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
    return 0;
}