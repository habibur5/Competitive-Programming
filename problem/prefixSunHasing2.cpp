#include <bits/stdc++.h>
using namespace std;
const int N = 10e5 + 10;
int hsh[N][26];
int main()
{

    /*
    ! solving technique
    * In a palindrome string every letter will be even except one 
    * one letter can be odd
    * if in a string two or more letter count odd then this string will not palindrome
    */
    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 1; j < 26; j++)
            {
                hsh[i][j] = 0;
            }
        }
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            hsh[i + 1][s[i] - 'a']++;
        }

        /*
            * lets input like abcec
            *  result of loop
            _________________________________________
            |   a   |   b   |   c  |    d   |   e   |
            -----------------------------------------
        1   |   1   |   0   |   0   |   0   |   0   |
            -----------------------------------------
        2   |   0   |   1   |   0   |   0   |   0   |
            -----------------------------------------
        3   |   0   |   0   |   1   |   0   |   0   |
            -----------------------------------------
        4   |   0   |   0   |   0   |   0   |   1   |
            -----------------------------------------
        5   |   0   |   0   |   1   |   0   |   0   |
            -----------------------------------------
        */

        //* prefix sum direction column
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                hsh[j][i] += hsh[j - 1][i];
            }
        }
        /*
            * result after prefix sum abcec
            _________________________________________
            |   a   |   b   |   c  |    d   |   e   |
            -----------------------------------------
        1   |   1   |   0   |   0   |   0   |   0   |
            -----------------------------------------
        2   |   1   |   1   |   0   |   0   |   0   |
            -----------------------------------------
        3   |   1   |   1   |   1   |   0   |   0   |
            -----------------------------------------
        4   |   1   |   1   |   1   |   0   |   1   |
            -----------------------------------------
        5   |   1   |   1   |   2   |   0   |   1   |
            -----------------------------------------
        */
        while (q--)
        {
            int l, r;
            cin >> l >> r;

            int oddCt = 0; /// odd means bijor
            for (int i = 0; i < 26; i++)
            {
                int charCt = hsh[r][i] - hsh[l - 1][i]; // l=3 r=5
                if (charCt % 2 != 0)
                    oddCt++;
            }
            if (oddCt > 1)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
    // o(t(n+n*26)+)

    return 0;
}