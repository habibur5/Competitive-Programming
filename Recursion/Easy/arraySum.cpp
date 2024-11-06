/* 
Sum of array
sum array 1 To nth position */

#include <bits/stdc++.h>
using namespace std;

int Sum(int n, int a[]){
    if(n<0) return 0;

    return Sum(n-1, a)+ a[n];

}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    int res = Sum(n, a);
    cout<<res<<endl;
    return 0;
}