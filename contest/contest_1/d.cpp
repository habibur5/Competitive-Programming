#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int count = 1;
    while(t--){
        int n;
        cin>>n;
        int arr[n][n];
        for(int i = 0; i<n; i++){
            for(int j= 0; j<n; j++){
                cin>>arr[i][j];
            }
        }
        int sum =0;
        for(int i = 0; i<n; i++){
           sum+= arr[i][n-1-i];
            
        }
        cout<<"Case "<<count<<": "<<sum<<endl;
        count++;
    }

    return 0;
}