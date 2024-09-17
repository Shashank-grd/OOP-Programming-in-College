#include <iostream>
using namespace std;

class Factorial {
    int num;
public:
    Factorial(int =0);
    int operator !();
   
};
Factorial::Factorial(int x):num(x){cout<<"Constructor called\n";}
int Factorial::operator  !() { 
        int fact = 1;
        for (int i = 1; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }

int main() {int x;
cout<<"Enter the no. :";
cin>>x;
    Factorial f1(x);
    int fact1 = !f1;   
    cout << "Factorial using member function: " << fact1 << endl;

    return 0;
}
