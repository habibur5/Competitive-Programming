#include <bits/stdc++.h>
using namespace std;

void Josephus(vector<int> person, int index, int k){
    if(person.size()==1){
        cout<< person[0]<<endl;
        return;
    }
    index = (index+k) % person.size(); // % check whether the index not overflow 

    person.erase(person.begin()+index);

    Josephus(person, index, k);
}
int main(){
    int n, k;
    cin>>n>>k;
    k--;
    int index = 0;

    vector<int> person;
    for(int i = 1; i<=n; i++){
        person.push_back(i);
    }

    Josephus(person, index, k);


    return 0;
}