#include<iostream>
using namespace std;
 struct phone{
int area;
int exchange;
int number;
};
int main()
{phone s1,s2;
s1.area=125;
s1.exchange=458;
s1.number=5678;
cout<<"enter your number accordingly area code,exchange and number :";
cin>>s2.area>>s2.exchange>>s2.number;
cout<<"My number is : ("<<s1.area<<") "<<s1.exchange<<"-"<<s1.number<<endl;
cout<<"Your  number is : ("<<s2.area<<") "<<s2.exchange<<"-"<<s2.number;
    
    return 0;
}