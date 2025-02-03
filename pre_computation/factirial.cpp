/* 
    Given T Test cases and in each
    test case a number N. Print its factorial
    for each test case % M
    where M = 10^9+7

    @Constraints
    1<= T <= 10^5
    1<= N <= 10^5
    time = 1 sec
*/

#include <bits/stdc++.h>
using namespace std;
const int N=10e5+10;
long long fact[N];
long long int M  = 10e9+7;
int main(){

    fact[0]=1;
    fact[1]=1;
    for (int i = 2; i < N; i++)
    {
        fact[i]= (fact[i-1]*i)%M;
    }

    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
    }
    
    //! basic code

   /*  int t;
    cin>>t;
    long long int M = 10e9+7;
    while(t--){
        int n;
        cin>>n;
        long long int fact = 1;
        for(int i = 1; i<=n; i++){
            fact = (fact*i)%M;
        }
        cout<<fact<<endl;
    } */
    
    

}