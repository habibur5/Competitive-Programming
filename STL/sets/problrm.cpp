/* Given N string, print unique
strings in lexiographical order
 with their frequency
N <= 10^5
|s| <= 100
 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    set<string> s;
    int n;
    cin>>n;
    for(int i = 0; i<n; i++){
        string str;
        cin>>str;
        s.insert(str);

    }
    for(auto val : s){
        cout<< val<<endl;
    }

    
    return 0;
}