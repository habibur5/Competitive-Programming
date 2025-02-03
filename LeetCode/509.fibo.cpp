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

int fibo(int n){
    if(n==0) return 0;
    else if(n==1) return 1;
    else return fibo(n-1) + fibo(n-2);
}

int main() {
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    return 0;
}