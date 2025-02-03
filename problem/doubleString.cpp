#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int ct = 0;
        string s;
        cin>>s;
        int len = s.length();
        //cout<<len<<endl;
        int cnt = len/2;
        if(len%2==0){
            
            for (int i = 0; i <len/2; i++)
            {
                
                if(s[i]==s[cnt]){
                    ct++;
                    cnt++;
                }else{

                }
            }
            
        }else{
            
            for(int j =0; j<len/2;j++){
                if(s[j]==s[cnt+1]){
                    ct++;
                    cnt++;
                }
            }
        }
        if(ct>= len/2){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    
    
    
    return 0;
}