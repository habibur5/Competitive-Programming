// C++ code to implement the idea

#include <bits/stdc++.h>
using namespace std;

// Recursive function to implement the Josephus problem
int josephus(int n, int k)
{
    if (n == 1)
        return 1;
    else
        return (josephus(n - 1, k) + k - 1) % n + 1;
}

// Driver code
int main()
{
    int n = 5;
    int k = 2;
    cout << "The chosen place is " << josephus(n, k);
    return 0;
}