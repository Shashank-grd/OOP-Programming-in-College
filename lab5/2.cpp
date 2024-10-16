/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;
class complex{
    int x,y;
    public:
    complex(int,int);
    friend class rectangle;
};
complex::complex(int x,int y):x(x),y(y) {
        
        cout<<"complex constructor called"<<'\n';
    }
class rectangle{
    complex topleft;
    complex bottomright;
    public:
    rectangle(complex,complex);
    ~rectangle(){
        cout<<"rectangle destructor called "<<'\n';
    }
};
rectangle::rectangle(complex t,complex b):topleft(t),bottomright(b) {
        cout<<"rectangle constructor called "<<'\n';
    }
int main()
{int a,b,c,d;
    cout<<"enter the 1st vertices :";
    cin>>a>>b;
    cout<<"enter the 2nd vertices :";
    cin>>c>>d;
    complex ob(a,b);
    complex ob1(c,d);
    rectangle ob2(ob,ob1);
    return 0;
}