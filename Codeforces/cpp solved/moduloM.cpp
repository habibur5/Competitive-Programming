
/*
    *Given a number N. Parts its factorial.
    @Constraints 
    *1<= N <= 100
    * print answer module M where M=47
*/

    /*
      1. (a+b)%M = ((a%M)+(b%M))%M
    * 2. (a*b)%M = { (a%M) * (b%M) } % M
    3. (a-b)%M = ((a%M)+(b%M)+M)%M
    4. (a/b)%M = ((a%M)*(b^-1)%M)%M
    
    */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int M=47;
    int n;
    cin>>n;
    long long fact = 1;

    for(int i= 2; i<=n; i++ ){
        fact=(fact*i)%M; //! How it works see in comments section
    }
    cout<<fact<<endl;
    return 0;
}
/* 
* lets factorial 5 with modulo 47
* {1*2*3*4*5}%47 = {(1*2*3*4)%47 * (5%47)}%47
*                = {(1*2*3)%47 * (4%47) * (5%47)} %47
*                = {(1*2)%47 * (3%47) * (4%47) * (5%47)} %47
*/