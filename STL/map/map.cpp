#include <bits/stdc++.h>
using namespace std;

void print(map<int, string> &m  ){
    cout <<m.size()<<endl;
    for (auto pr : m)
    {
        cout << pr.first << " " << pr.second << endl;
    }
}
int main(){
    //!! tc : for inserst, delete etc
    map <int, string> m;
    m[1] = "abc";
    m[5] = "cdc";
    m[3]= "acd";
    m.insert({4,"afg"});
    //! erase data 
    //todo: erase(key)
    m.erase(3);
    auto it = m.find(3); //? return iterator if no value then return end()
    if(it == m.end()){
        cout<< "no value";
    }else{
        cout << (*it).first << " " << (*it).second << endl;
    }

/*     map<int, string> :: iterator it;
    for(it = m.begin(); it !=m.end(); it++){
        cout << (*it).first<< " "<< (*it).second<<endl;
    } */
    print(m); 


    return 0;
}