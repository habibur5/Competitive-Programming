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

        ll m, a,b,c;
        cin>>m>>a>>b>>c;
        ll seat_need = 0;
        ll total_seat = m*2; // 30
        if(m<a){
            seat_need += m;
        }else{
            seat_need+=a;
        }
        if(m<b){
            seat_need += m;
        }else{
            seat_need+=b;
        }
        ll remain = total_seat-seat_need;
        if(remain<c){
            seat_need += remain;
        }else seat_need+=c;

        cout<<seat_need<<endl;

    }
   
    return 0;
}