#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

string can_get_three_distinct_sums(int n, vector<int>& a, vector<int>& b) {
    sort(a.begin(), a.end());
    set<int> distinct_sums;
    
    for (int i = 0; i < n; i++) {
        distinct_sums.insert(a[i] + b[i]);
        if (distinct_sums.size() >= 3) {
            return "YES";
        }
    }
    
    return "NO";
}

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        
        cout << can_get_three_distinct_sums(n, a, b) << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}
