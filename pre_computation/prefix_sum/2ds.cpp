/* 
Given 2d array a of N*N integers. Given Q queries and in each queary given a,b, c and d print sum of square representrd by (a, b) as top left point and (c,d) as top bottom right point

constraints

1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <=Q <= 10^5
1 <= a,b,c,d <= N

time 1sec

 */

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+10;
int ar[N][N];
long long pff[N][N];
int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            cin>> ar[i][j];
            pff[i][j] = ar[i][j] + pff[i-1][j]+pff[i][j-1]-pff[i-1][j-1];
            //cout<<pff[i][j]<<endl;

        }
        
    }
    int t;
    cin>>t;
    while (t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        
        cout<<pff[c][d]-pff[a-1][d]-pff[c][b-1]+pff[a-1][b-1]<<endl;
    //  cout<<pff[4][4]-pff[3][4]-pff[c][b-1]+pff[a-1][b-1]<<endl;
        
    }
    
    
    
    
    return 0;
}