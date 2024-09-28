/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <iostream>
using namespace std;
template <class T>
class Genericclass {
private:
    T data;

public:
    Genericclass(T value) : data(value) {}

    void display() {
       cout << "Data: " << data <<endl;
    }
};

int main() {
   
    Genericclass<int> intob(5);
    Genericclass<float> floatob(3.14);
    Genericclass<string> stringob("Hello");

    intob.display();
    floatob.display();
    stringob.display();

    return 0;
}
