/*
*  | ----------------------------|
*  | Bismillahir Rahmanir Raheem |
*  |-----------------------------|
*/
//starting with the name of almighty ALLAH
//! Practice is the only shortcut to improve
/*
*Author: habibur_44
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
#define offc ios::sync_with_stdio(false);cin.tie(0);cout.tie(NULL);
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

void solve() {
    int n;
    cin >> n;
    string final;
    cin >> final;
        while (final.size() > 1 && ((final.front() == '0' && final.back() == '1') || (final.front() == '1' && final.back() == '0'))) {
            final.erase(final.begin());    // Erase first element
            final.erase(final.end() - 1);  // Erase last element
        }
    cout << final.size()<<endl;
}

int main() {
    offc;
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}