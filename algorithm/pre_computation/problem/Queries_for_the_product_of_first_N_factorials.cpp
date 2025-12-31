/**
* author:  habiburrahman0001
**/

//! problem statement
/**
 * Given Q[] queries where each query consists of an integer N, the task is to find the product of first N factorials for each of the query. Since the result could be large, compute it modulo 109 + 7.
 */
#include <bits/stdc++.h>
using namespace std;


const long long  N = 1000000;
const long long  M = 10e9+7;

long long fact[N +1];
long long result[N+1];

int main() {
    fact[0]= 1;
    result[0]= 1;
    for(int i = 1; i<=N; i++){
        fact[i] = (fact[i-1]* i)%M;
        result[i] = (result[i-1]*fact[i])%M;
    }
    int t;
    cin>>t;
    while(t--){
        int q;
        cin>>q;
        cout<<result[q]<<endl;
    }
    // time complexity
    // O(N)+O(t) = O(N) = 10^6 < 1 second
    
    return 0;
}