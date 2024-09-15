#include<iostream>
using namespace std;
class FLOAT{
    float n;
    public:
    FLOAT(float=0);
    FLOAT operator +(FLOAT);
     FLOAT operator -(FLOAT);
      FLOAT operator *(FLOAT);
       FLOAT operator /(FLOAT);
      void display();
};
FLOAT::FLOAT(float a):n(a){cout<<"Constructer called \n";}
FLOAT FLOAT:: operator+(FLOAT f) {
        FLOAT x(n + f.n);
        return x;
    }

 FLOAT FLOAT ::operator-(FLOAT f) {
        FLOAT x(n - f.n);
        return x;
    }

 FLOAT FLOAT ::operator*(FLOAT f) {
        FLOAT x(n * f.n);
        return x;
    }

FLOAT FLOAT ::operator/(FLOAT f) {
        FLOAT x(n / f.n);
        return x;
    }
void FLOAT:: display() {
        cout << "Value after overloading : " << n << endl;
    }
int main()
{
    float a,b;
    cout<<"Enter the no. : ";
    cin>>a>>b;
    FLOAT F1(a),F2(b),F3;
    F3= F1+ F2;
    F3.display();

    F3= F1- F2;
    F3.display();

    F3= F1* F2;
    F3.display();

    F3= F1/ F2;
    F3.display();
    
    return 0;
}