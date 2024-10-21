/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;
class complex{
    int real;
    int imag;
    public :
    complex(){
        real=0;
        imag=0;  
    }
    complex(int re){
        real=re;
      imag=re;  
    }
    complex(int re,int im){
        real=re;
       imag=im;
    }
    complex add(complex ob1,complex ob2){
        ob1.real=ob1.real+ob2.real;
        ob1.imag+=ob2.imag;
        return ob1;
    }
      void display(){
        cout<<"complex no. is :"<<real<<" + i"<<imag<<'\n';
      } };

int main()
{ int a,b;
cout<<"ENTER THE NO. real and imag part :";
cin>>a>>b;
    complex ob1(a),ob2(a,b);
    ob1=ob1.add(ob1,ob2);
    ob1.display();
    return 0;
}