/* | ----------------------------|
*  | Bismillahir Rahmanir Raheem |
*  |-----------------------------|
*/
//starting with the name of almighty ALLAH
//! Practice is the only shortcut to improve
/*
*Author: habiburrahman0001 or habibur_44
*Judge: Codeforces
*Others Judge: habibur_44
*/
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x,y) make_pair(x,y)
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define tst int t;cin>>t;while(t--)
#define srt(v) sort(v.begin(),v.end());
#define rsrt(v) sort(v.rbegin(),v.rend());
#define offc ios::sync_with_stdio(false);cin.tie(0);
#define rvs(v) reverse(v.begin(),v.end());
#define F first
#define S second
#define MOD 1000000007
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)
#define PI 2*acos(0.0)
#define pii pair<int,int>
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define coutv(v) for(auto it:v)cout<<it<<' ';cout<<endl;
#define cinv(v) for(auto &it:v)cin>>it;
#define vall(v) v.begin(),v.end()
#define vrall(v) v.rbegin(),v.rend()
#define ld long double
#define nl '\n'
const int N = 1e5;
using namespace std;
/* #ifndef ONLINE_JUDGE
#include "algo/debug.h"
#else
#define dbg(x...)
#endif */
/* mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int my_rand(int l, int r)
{
   return uniform_int_distribution<int>(l, r) (rng);
} */
void solve()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int x;
        cin>>x;
        vector<int> a(n);
        a[0] = x;
        vector<int> b;
        b.push_back(a[0]);
        for(int i = 1; i<n; i++){
            cin>>a[i];
            if(a[i]>=a[i-1]) b.push_back(a[i]);
            else {
                b.push_back(a[i]);
                b.push_back(a[i]);
            }
        }
        cout<<b.size()<<endl;
        for(auto it:b){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}
int main()
{
   offc;
   solve();
   
   return 0;
}

// time t - 10^4
// n(10^9)
// t(10^4)(10^9 + 10^15)