#include<iostream>
using namespace std;
typedef struct complex{
    float real;
    float imag;
}complex;
int main()
{
    complex s1,s2,s;
    cin>>s1.real>>s1.imag;
    cin>>s2.real>>s2.imag;
    s.real=s1.real+s2.real;
    s.imag=s1.imag+s2.imag;
    if(s.imag>=0)
    {
        cout<<"th sum is :"<<s.real<<"+"<<s.imag<<"i"<<endl;
        
    }
    else 
     cout<<"th sum is :"<<s.real<<"-"<<"("<<s.imag<<"i"<<")"<<endl;
     return 0;
}