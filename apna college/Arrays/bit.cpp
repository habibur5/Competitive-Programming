#include <bits/stdc++.h>
using namespace std;




int main(){
 int a = 2, b=10;

 int size = abs(b-a)+1;

 size = ceil((double)size/32);

 int *arr = new int[size];
 memset(arr, 0, size * sizeof(int));

 for(int i =a; i<=b; i++){
  if(i%2==0 || i%5==0){
    arr[(i-a)>>5] |= (1<< ((i-a)&31));
  }
 }
 for(int i =a; i<=b; i++){
  if(arr[(i-a)>>5] & (1<< ((i-a)&31))){
    cout << i<<" ";
  }
 }
  
}