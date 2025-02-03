#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    //int a[n];

    set<int> s;
    for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        s.insert(x);
    }
/*     sort(a, a+n);

        for(int i = 0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl; */
    //auto it = lower_bound(a, a+n, 5);
    //auto it = upper_bound(s.begin(),s.end(), 5); // O(n)
    auto it = s.lower_bound(5); // O(n)
    if(it == (s.end())){
        cout<<"Not Found";
        return 0;
    }
    cout<<*it<<endl;
    return 0;
}