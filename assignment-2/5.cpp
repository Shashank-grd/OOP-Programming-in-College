#include<iostream>
using namespace std;
class time{
    int hour;
    int minute;
    int second;
    public:
    time();
    time(int,int,int);
    time operator +(time);
    void display();
};
time::time():hour(0),minute(0),second(0){}
time::time(int h,int m,int s):hour(h),minute(m),second(s){}
time time::operator +(time t2){
    time t3(hour+t2.hour,minute+t2.minute,second+t2.second);
    int day=0;
    if(hour+t2.hour>24){
          day++;
          t3.hour-=24;}
    if(minute+t2.minute>59){
    t3.hour++;
    t3.minute-=60;}
    if(second+t2.second>59){
    t3.minute++;
    t3.second-=60;}
    return t3;
}
void time::display(){
    cout<<"Time is : "<<hour<<":"<<minute<<":"<<second;
}
int main()
{int a,b,c,d,e,f;
    cout<<"Enter time in format HH:MM:SS  : ";
    cin>>a>>b>>c;
    cout<<"Enter time to add in format HH:MM:SS  :";
    cin>>d>>e>>f;
    time t1(a,b,c),t2(d,e,f),t3;
    t3=t1+t2;
    t3.display();
    
    return 0;
}