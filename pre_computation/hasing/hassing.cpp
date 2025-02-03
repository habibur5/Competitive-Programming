/* 
Given array a of N integers. Given Q queries/TestCase
and in each query given a number X, 
print count of that number in array.
Constraints 
1 <= <= 10^5
1 <= a[i]<=10^7
1 <= Q <= 10^5

*/
// detail method

/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>> a[i]; 
    }
    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        int ct = 0;
        for(int j = 0; j<n; j++){
        if(a[j]==x){
            ct++;
            }
         
        }
        cout<<ct<<endl;
       
    }
    
} */
// O(N) + O(Q*N) = O(N^2) = 10^10


/// short method using hash array
#include <bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N]; // already initial with zero (0)
int main(){ 
    int n;
    cin>> n;
    int a; ///a[n]
    for(int i = 0; i<n; i++){
        cin>> a; //p=0, 3, 5,5
        hsh[a] = hsh[a]+1;
    }
    int q;
    cin>>q;
    while (q--)
    {
        int x;
        cin>>x;
        cout<<hsh[x]<<endl;
    }
    
}
