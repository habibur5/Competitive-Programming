#include <bits/stdc++.h>
using namespace std;
// use & sign to pass vector
void PrintVector(vector<int> &v){
    cout<<"size: "<< v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<<" ";
    }
    cout<<endl;
} 
int main(){
    int N;
    cin>>N;
    vector<int> v[N];
    for(int i =0; i<N; i++){
        int n;
        for(int j = 0; j<n; j++){
            int x;
            cin>>x;
            v[i].push_back(x);
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        PrintVector(v[i]);
    }
    

    
}