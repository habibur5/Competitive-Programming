/**
 * author:  habiburrahman0001
 **/
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define forn(i, n) for (int i = 0; i < n; i++)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define pb push_back
#define sz(a) (int)a.size()

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int64_t t;
    cin >> t;
    while (t--)
    {
        int64_t k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        int64_t count = 0;
        // cout<<k<<l1<<r1<<l2<<r2<<endl;
        for (int64_t i = l1; i <= r1; i++)
        {
            int64_t n = 0;
            int64_t last = l2;
            int64_t pow_k = pow(k, n);
            while (last <= r2)
            {
                int64_t mul = pow_k * i;
                if (mul >= l2 && mul <= r2)
                {
                    count++;
                }
                n++;
                pow_k = pow(k, n);
                last = pow_k;
            }
        }
        cout << count << endl;
    }
    return 0;
}