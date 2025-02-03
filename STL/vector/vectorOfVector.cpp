
//! what is vector of vector
//* answer>> vector of verctor is 2D array that row and coloumn size are dynamic

#include <bits/stdc++.h>
using namespace std;
// use & sign to pass vector
void PrintVector(vector<int> &v)
{
    cout << "size: " << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    int N;
    cin >> N;
    vector<vector<int>> v;

    //dd take input of vector of vector
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        // todo v.push_back(vector<int>());
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
            // todo v[i].push_back(x);
        }
        v.push_back(temp); // todo: donot need if todo v.push_back(vector<int>());
    }

    for (int i = 0; i < v.size(); i++)
    {
        PrintVector(v[i]);
    }
}