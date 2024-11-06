/* 
Given array a of N integers. Given Q queries
and in each query given L and R print sum of
array elemnts from index L to R(L, R included)


Constraints
1 <= N      <= 10^5
1 <= a[i]   <= 10^9
1 <=  Q     <= 10^5
1 <=L, R    <= N 
*/
/* #include <bits/stdc++.h>
using namespace std;
const int N =1e5+11;
int a[N];
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    
    int t;
    cin>>t;
    while (t--)
    {
       int l,r;
       cin >>l >>r;
       long long sum = 0;
       for (int i = l; i <= r; i++)
       {
        sum = sum+a[i];
       }
       
        cout<< sum<<endl;
    }
    


    return 0;
} */

// method of prefix sum

#include <bits/stdc++.h>
using namespace std;
const int N =1e5+11;
int a[N];
int pf[N];
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
        pf[i] = pf[i-1] + a[i];
    }
    
    int t;
    cin>>t;
    while (t--)
    {
       int l,r;
       cin >>l >>r;
       
        cout<<pf[r]-pf[l-1]<<endl;
    }
    


    return 0;
}