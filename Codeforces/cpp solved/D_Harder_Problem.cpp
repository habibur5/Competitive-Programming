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
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll> v(n);
        unordered_map<ll, ll > c;
        for(int i = 0; i<n; i++){
            cin>>v[i];
        }
    vector<ll> b(n);
    ll mode_count = 0;
    ll mode_value = 0;

    for (int i = 0; i < n; i++) {
        c[v[i]]++;
        if (c[v[i]] > mode_count) {
            mode_count = c[v[i]];
            mode_value = v[i];
        }
        b[i] = mode_value;
    }
    for(auto it: b) cout<<it<<" ";
    cout<<endl;
    }
    return 0;
}