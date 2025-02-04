/*
*  | ----------------------------|
*  | Bismillahir Rahmanir Raheem |
*  |-----------------------------|
*/
//starting with the name of almighty ALLAH
//! Practice is the only shortcut to improve
/*
*Author: habibur_44
*Judge: Codeforces
*Others Judge: habibur_44
*/

#include <bits/stdc++.h>

    // introShort / inbuild short in cpp made with 3 distinct shorting algorithm
    /* 
    1. Quick Short //  start
    2. Merge Short //  number of elements is low
    3. Heap Short  //  number of elements is high
     */

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }

    
    sort(a.begin(), a.end());
    for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}