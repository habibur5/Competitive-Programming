#include <bits/stdc++.h>
using namespace std;
char upper(char c){
    return 'A'+ (c-'a');
}

char lower(char c){
    return 'a'+ (c-'A');
}
int main(){
    string s;
    cin>>s;
    long long int result=0;
    for(int i = 0; i<s.size(); i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i] = upper(s[i]);
            result-=s[i];
        }else if(s[i]>='A' && s[i]<='Z'){

            s[i] = lower(s[i]);
            result +=s[i];
        }
    }
    if(result<0){
        result*=-1;
    }
    for(int i = 2; i<result; i++){
        if(result%i==0){
            cout<<0<<endl;
            return 0;;
        }
    }
    cout<<1<<endl;
    
    return 0;
}