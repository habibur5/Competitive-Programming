#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int arr[n], cnt=0;
        for(int i = 0; i<n; i++)cin>>arr[i];
        for(int i= 1; i<n; i++)
            if(arr[i-1]%2 == arr[i]%2) cnt++;
        cout<<cnt<<endl;
    }
    return 0;
}