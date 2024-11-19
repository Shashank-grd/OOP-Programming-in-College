/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;
class staff{
protected:
string code;
string name;
public:
staff(string c,string n):code(c),name(n){}
void display(){
    cout<<"Name :"<<name;
    cout<<"\nCode is :"<<code<<"\n";
}};
class teacher:public staff{
    protected:
    string subject;
    int publication;
    public:
    teacher(string c,string n,string s,int p):staff(c,n),subject(s),publication(p){}
    void display(){
        cout<<"Subject is :"<<subject<<"\n";
        cout<<"No. of publication is :"<<publication<<"\n";
    }};
class typist:public staff{
    protected:
    int speed;
    public:
    typist(string c,string n,int s):staff(c,n),speed(s){}
    void display(){
        cout<<"Speed is :"<<speed<<"\n";
    }};
class regular:public typist{
    public:
    regular(string c,string n,int b):typist(c,n,b){}};
class casual :public typist{
    protected:
    int wages;
    public:
    casual(string c,string n,int s,int b):typist(c,n,s),wages(b){}
    void display(){
        cout<<"Wages is :"<<wages<<"\n";
    }};
class officer:public staff{
    protected:
    char grade;
    public:
    officer(string c,string n,char g):staff(c,n),grade(g){}
    void display(){
        cout<<"Grade :"<<grade<<"\n";
    }};
int main()
{  teacher t("abc12","SHASHANK","OOP",1);
   regular r("xyz34","Sinha",20);
   casual c("mno98","Sha",30,40);
   officer o("pqr43","MNO",'A');
    t.staff::display();
    t.display();
    r.staff::display();
    r.typist::display();
    c.staff::display(); 
    c.typist::display();
    c.display();
    o.staff::display();
    o.display();
    return 0;
}