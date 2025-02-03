#include <bits/stdc++.h>
using namespace std;
int main(){
    int x =4;
    int *p_x= &x;
    cout<<"address of x = "<<&x<<endl;
    cout<<"Value of p_x = "<<p_x<<endl;
    cout<<"Value of *P_X= "<<*p_x<<endl;
    *p_x = 100;
    cout<<x<<endl;
    cout<<"p_x+1= "<<p_x+1<<endl;
    // double pointer

    int **pp_x = &p_x;
    cout<<"addr p_x: "<<&p_x<<endl;
    cout<<"val p_x: " << p_x<<endl;
    cout<<"val pp_x: " << pp_x<<endl;
    cout<<"val *pp_x: " << *pp_x<<endl;
    cout<<"val *pp_x: " << **pp_x<<endl;
    **pp_x=200;
    cout<<**pp_x<<endl;

    

    
    return 0;
}