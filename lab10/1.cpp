/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;
template <class t>
void Swap(t &a,t &b){
    t temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int x=10,y=20;
    float a=0.1,b=0.2;
    Swap(x,y);
    Swap(a,b);
    cout<<x<<"   "<<y<<endl;
    cout<<a<<"   "<<b<<endl;
    return 0;
}