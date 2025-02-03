/*
Luffy With his crew iS on the way to Dressrosa, where he will be fighting one of the warlords of the sea Doflamingo. But now
he is getting bored and wants dop fun activity. He is very much obsessed with palindromes. Given a string S of lower case
English alphabet of length N and two Integers L and R he wants to know whether all the letters of the substring from index L
to R (L and R included) can be rearranged to form a palindrome or not. He wants to know this for Q values of L and R and
needs your help in finding the answer.
Palindrome is a string of characters which when reversed reads same as the original String


CONSTRAINTS :
    * 1<=t<=10
    * 1<=N,Q <=100000
    * 1<=L<=R<=N
    * 'a' <= S[i]<='z' for 1<=i<=N

INPUT :
First line contains an integer t denoting the number of test cases
First line of each test case contains 2 space separated integers N and Q. the length of the string and number of queries respectively
Next line contains the string S
Each of the Next Q lines contain 2 space separated integers L and R

OUTPUT
For each query of each test case print 'YES" without quotes if letters of the substring from L to R can be rearranged to form a palindrome otherwise output "NO" in new line

*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n, q;
        cin>>n>>q;
        string s;
        cin>>s;
        while (q--)
        {
            int l, r;
            cin>>l>>r;
            int hsh[26];
            for(int i=0; i<26; i++){
                hsh[i]=0;
            }
            l--;r--; // because string input is zero base
            for(int i=l; i<=r; i++){
                hsh[s[i]-'a']++; 
            }
            int oddCt=0;
            for(int i=0; i<26; i++){
                if(hsh[i]%2 !=0) oddCt++;
            }
            if(oddCt >1) cout<<"NO\n";
            else cout<<"YES\n";
        }
        
    }
    
    // o(t*(n+q*(26+n+26))) = O(t*q*n)
    
    return 0;
} /* 
Luffy with his crew is on the way to Dressrosa, where he will be fighting one of the warlords of the sea Doflamingo. But now he is getting bored and wants do a fun activity. He is very much obsessed with palindromes. Given a string S of lower case
English alphabet of length N and two Integers L and R he wants to know whether all the letters of the substring from index L to R (L and R included) can be rearranged to form a palindrome or not. He wants to know this for Q of L and R and needs your help in finding the answer.
Palindrome IS a string of characters which when reversed reads same as the original String.
CONSTRAINTS :
    1<=t<=10
    1 <= N, Q <=100000
    1<= L <= R<= N
    'a' <= S[i] <= 'z' for 1 <= i<= N 

INPUT 
    First line contains an integer t denoting the number of test cases
    First line of each test case contains 2 space separated integers N and Q the length of the string and number of queries respectively
    Next line contains the string S
    Each of the Next Q lines contain 2 space separated integers L and R

OUTPUT
    PRINT "YES" if can make palindrome
    Otherwise print "NO"*/