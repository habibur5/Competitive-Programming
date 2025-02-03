#include <bits/stdc++.h>
using namespace std;
void Print(unordered_map<int,string> &m){
   cout<< m.size()<<endl;
   for(auto upr: m){
    cout<<upr.first<<" "<<upr.second<<endl;
   }
}
int main(){
     unordered_map<int, string> m;
     m[1]= "abc";
     m[5] = "cdc";
     m[3] = "jhf";
     m[2] = "jff";
     Print(m); 
        


    return 0;
}