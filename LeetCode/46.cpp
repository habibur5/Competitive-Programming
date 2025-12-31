#include <bits/stdc++.h>
using namespace std;
void perm(int arr[], int l, int r){
    if(l == r ){
        for(int i=0; i<r; i++) cout<<arr[i];
        cout<<endl;
        return;
    }else{
        for(int i = l; i<r; i++){
            swap(arr[l], arr[i]);
            perm(arr, l+1, r);
            swap(arr[l], arr[i]);
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    perm(arr, 0, n);
    return 0;
}