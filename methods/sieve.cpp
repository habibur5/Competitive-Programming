#include <bits/stdc++.h>
using namespace std;
int Prime[300000], nPrime;
int mark[1000002];
void sieve(int n){
    int limit = sqrt(n)+2;
    cout<<"Limit = "<<limit<<endl;
    mark[1] = 1;
    // almost all the evens are not prime
    for(int i = 4; i<=n; i+=2) mark[i] = 1; // optional

    Prime[nPrime++]=2;

    // runs loop for only odds

    for(int i = 3; i<=n; i+=2) {
        cout<<"mark["<<i<<"] = "<<mark[i] <<endl;
        if(!mark[i]){
            // i is prime
            Prime[nPrime++] = i;
            if(i<=limit){
                // loop through all odd multiples of i
                for(int j = i*i; j<=n; j+=i) mark[j] = 1;
            }
        }
    }


}
int main(){
    sieve(10);
    
    return 0;
}