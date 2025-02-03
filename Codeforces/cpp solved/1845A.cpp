/**
* author:  habibur_44
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
        int n,k,x;
        cin>>n>>k>>x;
        if (k==1 && x==1 || n%2==1 && k==2 && x==1) cout << "NO\n";
        else {
            cout<<"YES"<<endl;
            cout<<4<<endl;
            cout<<4<<" "<<4<<endl;
        }

    }
    return 0;
}