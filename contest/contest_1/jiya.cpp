/**
* author:  habibur_44
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long product = 1 ;
        while (n--)
        {
            int x;
            cin>>x;
            product*=x;
        }

        int digit = product%10;
        if(digit ==2 || digit == 3 || digit == 5){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
        
    }
    return 0;
}