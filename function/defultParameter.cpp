#include <iostream>
#include <string>
using namespace std;
void MyFunction(string name = "Bangladesh"){
    cout << name<<endl;
}

int main() {
    
    MyFunction("Usa");
    MyFunction();
    MyFunction("Uk");
    MyFunction("Canada");
    MyFunction();

}
