#include <bits/stdc++.h>
using namespace std;

int charature(int n,int k){
    if(n == 1 && k==1) return 0;

    int length  = pow(2, n-1);
    int mid = length/2;

    if(k<=mid) return charature(n-1, k);
    else return !charature(n-1, k-mid);
}
int main()
{
    int n, k;
    cin >> n >> k;
    cout<<charature(n,k)<<endl;

    return 0;
}