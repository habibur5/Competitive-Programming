#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];

    int sum = 0;
    
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        arr[i] = sum;
    }
    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;
        cout << arr[r] - arr[l-1] << endl;
    }

    return 0;
}