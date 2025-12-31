#include <bits/stdc++.h>
using namespace std;
long long arr[1000000];
int main()
{
    arr[0] = 1;
    arr[1] = 1;
    for(long long i = 3; i<1000000; i+=2){
        arr[i+1] = 1;
        if(arr[i] == 0){
            for(long long j = i * i; j<1000000; j+= i*2){
                arr[j] = 1;
            }
        }
    }
    long long t; 
    cin>>t;
    for(long long i=1; i<=t; i++){
        long long x;
        cin>>x;
        long long sq =sqrt(x);

        if(x==1) cout<<"NO"<<endl;
        else if(sq*sq == x && arr[sq] == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}