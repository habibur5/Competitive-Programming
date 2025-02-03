/* https://www.hackerrank.com/challenges/crush/problem */
#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
long long int ar[N]; // initalized with 0 automatically
int main(){
    int n,m;
    cin>>n>>m;
    while (m--){
        int a, b,d;
        cin>>a>>b>>d;
        for (int i = a; i <=b; i++)
        {
            ar[i]+=d;
        }
        
    }
    long long mx = -1;
    for(int i = 1; i<=n; i++){
        if(mx< ar[i]){
            mx =ar[i];
        }
    }
    cout<<mx<<endl;

    // O(m*n +n) = 2*10^5 *10^7 = 10^12 > 1 sec
    return 0;
}