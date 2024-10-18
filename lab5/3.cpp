/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <iostream>
using namespace std;
class check {
public:
    check() {
        cout << "Global object constructor called." << endl;
    }
    ~check() {
        cout << "Global object destructor called." << endl;
    }
};
check global_object; 
int main() {
    cout << "Main function called." << endl;
    return 0;
}
