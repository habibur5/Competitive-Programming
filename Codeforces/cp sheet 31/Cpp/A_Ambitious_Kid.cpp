/* | ----------------------------|
 *  | Bismillahir Rahmanir Raheem |
 *  |-----------------------------|
 */
// starting with the name of almighty ALLAH
//! Practice is the only shortcut to improve
/*
 *Author: habiburrahman0001 or habibur_44
 *Judge: Codeforces
 *Others Judge: habibur_44
 */
#include <bits/stdc++.h>
#define offc                     \
    ios::sync_with_stdio(false); \
    cin.tie(0); \
    cout.tie(0);
const int N5 = 1e5;
const int N9 = 1e9;
using namespace std;
void solve()
{
}
int main()
{
    offc;
    int n;
    cin>>n;
    int ans = N9, a;
    while(n--){
        cin>>a;
        ans = min(ans, abs(a));
    }
    cout<<ans<<endl;
    return 0;
}