#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    string s;
    cin >> s;
    long long int x = 2 * n - 2;
    long long int ans = 0;
    int a[26] = {0};
    for (int i = 0; i < x; i += 2)
    {
        a[s[i] - 'a']++;
        if (a[s[i + 1] - 'A'] > 0)
        {
            a[s[i + 1] - 'A']--;
        }
        else
        {
            ans++;
        }
    }
    cout << ans;
    return 0;
}