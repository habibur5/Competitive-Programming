/* 
Given T Test cases and in each
test case a number N. Print its factorial
for each test case % M
where M = 10^9+7
Constraints
1<= T <= 10^5
1<= N <= 10^5
time = 1 sec
*/

#include <bits/stdc++.h>
using namespace std;
const int N=10e5+10;
long long fact[N]; 
int main(){

    fact[0]=1;
    fact[1]=1;
    for (int i = 2; i < N; i++)
    {
        fact[i]= fact[i-1]*i;
    }

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
    }

    
    

}