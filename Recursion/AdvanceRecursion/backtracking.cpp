#include <bits/stdc++.h>
using namespace std;
vector<string> valid;
void generate(string &s,int open, int close){

    cout<<s<<" "<<open<<" "<<close<<endl;
    if(open == 0 && close == 0){
        valid.push_back(s);
        return;
    }
    if(open > 0 ){
        s.push_back('(');
        generate(s, open-1, close);
        s.pop_back();
    }
    if(close > 0 && close > open){
        s.push_back(')');
        generate(s, open, close-1);
        s.pop_back();
    }
}

int main(){

    string s="";
    int n = 2;
    generate(s, n, n);
    cout<<"[\"";
    for(auto x: valid){
        if(x == valid.back()){
            cout<<x;
        }
        else{
            cout<<x<<"\",\"";
        }
    }
    cout<<"\"]";
    return 0;
}