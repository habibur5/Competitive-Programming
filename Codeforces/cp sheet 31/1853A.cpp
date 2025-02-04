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
        int n;
        cin>>n;
        int arr[n+1];
        int different = INT_MAX;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if(i>0){
                int mid = ((arr[i]+arr[i-1])/2)+1;
                int dif = mid-arr[i-1];
                if(dif<different){
                    different=dif;
                }
            }
        }
        
        if(different>=0){
            cout<<different<<endl;
        }else cout<<0<<endl;
    }   
    return 0;
}