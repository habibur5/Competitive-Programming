#include <bits/stdc++.h>
using namespace std;
int main(){
	int x= 4;
	int *p_x = &x;

	cout<<"Addr x: "<<&x<<endl;
	cout<<"Value p_x: "<<p_x<<endl;
	cout<<"Value *p_x: "<<*p_x<<endl;
	*p_x = 5;
	cout<<"x: "<<x<<endl;
	cout<<"Value p_x+1: "<<p_x+1<<endl;
	int **p_p_x = &p_x;
	cout<<"Addr p_x: "<<&p_x<<endl;
	cout<<"val p_p_x: "<<p_p_x<<endl;
	cout<<"val *p_p_x: "<<*p_p_x<<endl;
	cout<<"val **p_p_x: "<<**p_p_x<<endl;

}