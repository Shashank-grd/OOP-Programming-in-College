/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;
class shape{
protected:
float l;
float b;
public:
    void getdata(int x,int y=0){
    l=x;
   b=y;
    }
    virtual void display()=0;
};
class triangle:public shape{
public:
    void display(){
    cout<<"The Area of Triangle is :"<<0.5*l*b<<endl;
    }
};
class rectangle:public shape{
public:
    void display(){
    cout<<"The Area rectangle is :"<<l*b<<endl;
    }
};
class circle:public shape{
public:
    void display(){
    cout<<"The Area circle is :"<<l*l*3.14<<endl;
    }
};
int main(){
    int l,b,a;
shape* s;
triangle t;
rectangle r;
circle c;
cout<<"Enter the length and breadth :";
    cin>>l>>b;
s=&t;
s->getdata(l,b);
s->display();
s=&r;
s->getdata(l,b);
s->display();
cout<<"Enter the radius of circle :";
    cin>>a;
s=&c;
s->getdata(a);
s->display();
return 0;
}
