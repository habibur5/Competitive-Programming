#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    string n;
    for (cin >> t; cin >> n;)
    {
        cout << 9 * (n.size() - 1) + n[0] - '0' << endl;
    }
}