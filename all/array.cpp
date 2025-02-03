#include <bits/stdc++.h>
using namespace std;

void Array(int a[][20]){
	a[0][0]=5;

}
int main(){
	int a[10][20];
	a[0][0]=7;

	cout<<a[0][0]<<endl;
	Array(a);
	cout <<a[0][0]<<endl;

}