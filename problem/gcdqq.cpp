/* 
You are an array A of integers of size N. You will be given Q quries where each query is represented by two integers L, R. You have to find the gcd of the array after excluding the part from range L to R inclusive (1 base indexing). You are guaranteed that after exluding the part of the array remaining array is non empty.

Input
1. first line of input contains an integer T denoting number of test case
2. For each test case, first line will contain two space separated integers N, Q.
3. Next line contains N space separated integers denoting array A.
4. For next Q lines, each line will contain a query denoted by two space separated integers L, R

Constraints
Subtask #1 : 40 points
• 2<=T,N<=100, 1 <=Q<=N, 1 <= 10^5
• 1<=L,R<=N and L<=R

Subtask #2: 60 points
• 2<=T,N<=10^5, 1<=Q<=N 1<=A[i]<=105
• 1<=L,R<=N and L<=R
• Sum of N over all the test cases will be less than or equal to 10^6.
 */

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int a[n+10];
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        while (q--)
        {
            int l, r;
            cin>>l>>r;
            int gc= 0;
            for(int i = 1; i<=l-1; i++)
                gc= __gcd(gc,a[i]);
            
            for(int i = r+1; i<=n; i++)
                gc= __gcd(gc,a[i]);
            
            cout<<gc<<endl;
        }
        
    }
    return 0;
}

/*
* time calculation
o(t * (n*q(n)))
*/