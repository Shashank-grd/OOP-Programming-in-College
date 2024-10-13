/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;
class bank
{
    int account,balance;
    string name,type;
public:
    void set(int ,string,string);
    void initial();
    void deposit(int);
    void withdraw(int);
    void display();
};
void bank::set(int a,string n,string t){
name=n;
account=a;
type=t;
}
void bank::initial(){
balance=0;
}
void bank::deposit(int d){
balance+=d;}
void bank::withdraw(int w){
balance-=w;
}
void bank::display(){
if(balance<0)
{
    cout<<"insuficient balance"<<endl;
}
cout<<"account holder :"<<name<<"\n"<<"balance left :"<<balance;

}
    int main()
    {bank s1;
    int w,d,a;
    string n,t;
        cout<<"enter the name :";
        cin>>n;
        cout<<"enter the account no. :";
        cin>>a;
        cout<<"enter type of account :";
        cin>>t;
        cout<<"enter the amout to deposit :";
        cin>>d;
        s1.set(a,n,t);
        s1.initial();
        s1.deposit(d);
        cout<<"enter the amount to withdraw :";
        cin>>w;
        s1.withdraw(w);
        s1.display();
        return 0;

    }
