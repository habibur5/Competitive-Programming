/* | ----------------------------|
*  | Bismillahir Rahmanir Raheem |
*  |-----------------------------|
*/
//starting with the name of almighty ALLAH
//! Practice is the only shortcut to improve
/*
*Author:habibur_44
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

void solve()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(k==1&&x==1 || n%2==1 && k==2 && x==1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            if(x!=1){
                cout<<n<<endl;
                for(int i = 0; i<n; i++){
                    cout<<1<<" ";
                }
            }  else{
                cout<<n/2<<endl;
                if(n%2==0 && k>=2){
                    
                    for(int i = 0; i<n/2; i++){
                        cout<<2<<" ";
                    }
                }else{
                    for(int i = 0; i<n/2-1; i++) cout<<2<<" ";

                    cout<<3;
                }
            }
            cout<<endl;
        }
    }
}
int main()
{
   offc;
   solve();

   
   return 0;
}