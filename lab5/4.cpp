/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <iostream>
using namespace std;
class MyClass {
public:
    MyClass() {
        cout << "Default constructor called." << endl;
    }
    MyClass(int a, int b = 0) {
        cout << "Parameterized constructor  called: " << a << ", " << b << endl;
    }};
int main() {
    MyClass obj1;          
    MyClass obj2(10);     
    MyClass obj3(20, 30);        
    return 0;
}
