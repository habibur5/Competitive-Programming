#include <bits/stdc++.h>
using namespace std;
const double eps = 1e-6;
double multiply (double &mid, int n){
    while(n-- !=1){
        mid*=mid;
    }
    return mid;
}
int main(){
    double x;
    int n;
    cin>>x>>n;

    double lo=1, hi=x, mid;
    while(hi-lo>eps){
        mid =(hi+lo)/2;
        if(multiply(mid, n)< x){
            lo = mid;
        }else{
            hi=mid;
        }
    }
        cout<<lo<<endl;
    return 0;
}