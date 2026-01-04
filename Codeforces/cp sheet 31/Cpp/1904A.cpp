#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, xk, yk, xq, yq;
        cin >> a >> b;
        cin >> xk >> yk;
        cin >> xq >> yq;
        vector<long long> x_axis = {a, a, -a, -a, b, b, -b, -b};
        vector<long long> y_axis = {b, -b, b, -b, a, -a, a, -a};
        set<pair<long long, long long>> KingPosition;
        set<pair<long long, long long>> QueenPosition;
        for (int i = 0; i < 8; i++)
        {
            KingPosition.insert({x_axis[i] + xk, y_axis[i] + yk});
        }

        for (int i = 0; i < 8; i++)
        {
            QueenPosition.insert({x_axis[i] + xq, y_axis[i] + yq});
        }
        int ans = 0;
        for (auto k : KingPosition)
        {
            if (QueenPosition.find(k) != QueenPosition.end())
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}