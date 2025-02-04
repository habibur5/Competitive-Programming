/* #include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int n = 1;
    while (true) {
        int totalSum = n * a;

        vector<int> arr(n, b); 

        int currentSum = n * b; 

        int difference = totalSum - currentSum;

        for (int i = 0; i < n && difference != 0; ++i) {
            if (abs(arr[i] + difference) <= 1e6) {
                arr[i] += difference;
                difference = 0;
            }
        }

        if (difference == 0) {
            double mean = (double)accumulate(arr.begin(), arr.end(), 0LL) / n;
            sort(arr.begin(), arr.end());
            double median;
            if (n % 2 == 1) {
                median = arr[n / 2];
            } else {
                median = (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
            }

            if (mean == a && median == b) {
            
                cout << n << endl;
                for (int x : arr) {
                    cout << x << " ";
                }
                cout << endl;
                return 0;
            }
        }
        ++n;
    }

    return 0;
} */
/**
* author:  habiburrahman0001
**/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forn(i,n) for(int i=0;i<n;i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(),v.rend()
#define pb push_back
#define sz(a) (int)a.size()
   
 
int main() {
    
    ll a, b;
    cin >> a >> b;
    ll max = 1000;
    ll need = max+b;
    ll multi = a*3;
    ll c = multi-need;
    cout<<3<<endl;
    cout << c<<" "<<b<<" "<<max<<endl;
    return 0;
}
