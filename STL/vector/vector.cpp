#include <bits/stdc++.h>
using namespace std;
// use & sign to pass vector
void PrintVector(vector<int> &v) // projon na hole vector reference pass korbo
{
    cout<<"size: "<< v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i]<< " ";
    }
    cout<<endl;
    

}

int main(){

    vector<int> v(10, 3);
    v.push_back(7);
    v.push_back(6);
    PrintVector(v);
    //* v.pop_back(); ! delete last value
    //PrintVector(v); 

    vector<int> v2 = v; //dd : vector copy hoitache tc: o(n)
    /// in c programm
    int a[14];
    int aSize = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i <= aSize; i++)
    {
        a[i] = v[i];
    }
    for (int i = 0; i <= aSize; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    // end c program
    
    vector <int> &vs = v2; // vector copy hoy na direct vector pass hoy.  
    v2.push_back(5); 
    PrintVector(v2);


/*     int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    } 

    PrintVector(v); */
    
   
}