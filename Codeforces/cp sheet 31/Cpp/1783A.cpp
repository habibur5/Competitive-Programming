#include <bits/stdc++.h>
using namespace std;
int T, n, a[100];
int main(){
    cin >> T;
    while (T--)
    {
        cin >> n;
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        if (a[1] == a[n])
            cout << "NO\n";
        else
        {
            cout << "YES\n";
            cout << a[1];
            for (int i = n; i > 1; i--)
                cout << " " << a[i];
            cout << endl;
        }
    }
}

/* #include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; cin>>n;
        int iarray[n];
        vector<int> res;
        for(int i = 0; i<n; i++){
            cin>>iarray[i];
        }
        int ss= ceil(n/2.0);
        int temp = n;
        for(int i = 0; i< ss; i++){
            res.push_back(iarray[i]) ;
            if(temp%2 != 0 ){
                if(i !=ss-1){
                    res.push_back(iarray[--n]);
                }
            }else res.push_back(iarray[--n]);
        }
        if(res[0] == res[1]) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            for(auto it: res){
                cout<<it<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
} */