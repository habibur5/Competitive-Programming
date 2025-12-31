#include <bits/stdc++.h>
using namespace std;
int main(){
    int n = 5;
 int a[] = {5, 4, 3, 2, 1};
    for (int i = 0; i < n-1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if(a[j]< a[minIndex]){
                minIndex = j;
            }
        }
        swap(a[i], a[minIndex]);
        
    }
    for(auto it: a){
        cout<<it<<" ";
    }
    

    return 0;
}