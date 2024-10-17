/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;
class Distance{
int feet;
int inch;
public:
    Distance(int=0,int=0);
    void display();
    Distance operator +(Distance);
    Distance operator -(Distance);
    Distance operator +=(Distance);
    Distance operator -=(Distance);
    Distance operator <(Distance);
    Distance operator >(Distance);
};
Distance::Distance(int feet,int inch){
this->feet=feet;
this->inch=inch;}

Distance Distance::operator +(Distance ob2){
    Distance ob3(feet+ob2.feet,inch+ob2.inch);
    int b=0;
    if(ob3.inch>12){
        b=ob3.inch/12;
        ob3.feet+=b;
         ob3.inch%=12;
    }
    return ob3;
}
Distance Distance::operator -(Distance ob2){
    Distance ob3(feet-ob2.feet,inch-ob2.inch);
    if(ob3.inch<0 )
        ob3.inch=0;
    if(ob3.feet<0)
        ob3.feet=0;
    return ob3;
}

Distance Distance::operator +=(Distance ob2){
    feet+=ob2.feet;
    inch+=ob2.inch;
      int b=0;
    if(inch>12){
        b=inch/12;
        feet+=b;
         inch%=12;
    }
    return *this;
}
Distance Distance::operator -=(Distance ob2){
     feet-=ob2.feet;
     inch-=ob2.inch;
     if(inch<0 )
        inch=0;
    if(feet<0)
        feet=0;
    return *this;
}
Distance Distance::operator <(Distance ob2){
    if(feet<ob2.feet)
    return Distance(ob2.feet,ob2.inch); 
}
Distance Distance::operator >(Distance ob2){
     if(feet>ob2.feet )
      return Distance(feet,inch);
}
void Distance::display(){
cout<<"Distance = "<<feet<<":"<<inch<<endl;
}
int main(){
int a,b,c,d;
cout<<"Enter 1st distance (order is feet then inch): ";
cin>>a>>b;
cout<<"Enter 2nd distance (order is feet then inch): ";
cin>>c>>d;
Distance ob1(a,b),ob2(c,d),ob3,ob4;
ob3=ob1+ob2;
ob3.display();
ob3=ob1-ob2;
ob3.display();
ob1+=ob2;
ob1.display();
ob1-=ob2;
ob1.display();
ob4=ob1<ob2;
ob4.display();
ob4=ob1>ob2;
ob4.display();
return 0;
}

