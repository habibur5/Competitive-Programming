#include <bits/stdc++.h>
using namespace std;

int main() {
    int N; 
    cin >> N; 
    int a[N];
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    int count = 0;
    for (int i = 0; i < N; i++) {
        if ((i+1) % 2 != 0 && a[i] % 2 != 0) {
            count++; 
        }
    }
    cout << count << endl;

    return 0;
}
