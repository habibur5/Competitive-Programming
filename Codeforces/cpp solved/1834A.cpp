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


int main()
{
   offc;
   int t;
   cin>>t;
   while(t--){
        int n;
        cin>>n;
        int countP = 0, sum = 0, countM=0;
        for(int i = 0; i<n; i++){
            int x;
            cin>>x;
            if(x==1) countP++;
            else countM++;
        }
        
        /* 
        * conditions 
        1. sum>= 0
        2. product = 1
        */

        if(countM <= countP){

            if(countM%2==1) cout<<1<<endl;
            else cout<<0<<endl;
        }
        else {
            // countM  >  countP
            // first condition is violated

            int ops = countM - n/2; // now first condition is satisfied
            if( (n/2)%2 ==1) ops++;

            cout<<ops<<endl;
        }
    }

    return 0;

}