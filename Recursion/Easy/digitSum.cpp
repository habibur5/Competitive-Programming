/* 
 digit sum of user input number 
 
 */

#include <bits/stdc++.h>
using namespace std;

// digit sum
// 1234 -> 4+ digitSum(123) 
/// DigitSum(n) = DigitSum(n/10)+ last_digit // n%10

int DigitSum(int n){

    if(n==0) return 0;
    return DigitSum(n/10)+ (n%10);

}
int main(){
    int num;
    cin>>num;
    cout << DigitSum(num);
    return 0;
}