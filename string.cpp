#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define vc vector
#define vi vc<int>
#define vl vc<ll>
#define mp(x, y) make_pair(x, y)
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define srt(v) sort(v.begin(), v.end());
#define rsrt(v) sort(v.rbegin(), v.rend());
#define offc                     \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(NULL);
#define rvs(v) reverse(v.begin(), v.end());
#define F first
#define S second
#define MOD 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * b) / gcd(a, b)
#define PI 2 * acos(0.0)
#define pii pair<int, int>
#define fr(i, a, b) for (int i = a; i <= b; i++)
#define coutv(v)           \
    for (auto it : v)      \
        cout << it << ' '; \
    cout << endl;
#define cinv(v)        \
    for (auto &it : v) \
        cin >> it;
#define vall(v) v.begin(), v.end()
#define vrall(v) v.rbegin(), v.rend()
#define ld long double
#define nl '\n'
const int N = 1e5;
using namespace std;

void solve()
{
    string str;
    getline(cin, str);  // Get the whole line of input
    
    for (int i = 0; i < str.size(); i++) {
        if (i == 0) {
            str[i] = toupper(str[i]);  // Capitalize first letter of the string
        }
        else if (str[i] == ' ' && i + 1 < str.size()) {
            str[i + 1] = toupper(str[i + 1]);  // Capitalize first letter after each space
        }
    }
    cout << str << endl;  // Output the modified string
}

int main()
{
    offc;
    
    int t;
    cin >> t;
    cin.ignore();  // Ignore the newline character after reading t
    
    while (t--) {
        solve();  // Process each test case
    }
    
    return 0;
}
