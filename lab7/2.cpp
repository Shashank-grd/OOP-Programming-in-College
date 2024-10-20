/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;
class student{
       string edu;
       string degree;
    public:
        void get(){
            cout<<"Enter the name of school or university :";
            getline(cin, edu);
            cout<<"Enter the degree :";
            getline(cin, degree);
        }
        void display(){
            cout<<"studing in :"<<edu<<"\ndegree :"<<degree<<'\n';
        }};
class employee{
    string name;
    long int no;
    public:
    void get(){
        cout<<"Enter the name of employee :";
        getline(cin, name);
        cout<<"Enter employee no. :";
        cin>>no;
        cin.ignore();
    }
    void display(){
    cout<<"Employee name :"<<name<<"\nEmployee no. :"<<no<<'\n';
    }};
class manager:public employee,public student{
string title;
float due;
public:
void get(){
    employee::get();
    student::get();
    cout<<"Enter the title :";
    getline(cin, title);
    cout<<"Enter dues :";
    cin>>due;
    cin.ignore();
}
void display(){
    employee::display();
    student::display();
    cout<<"Title is :"<<title<<"\nDue is :"<<due<<endl;
}
};
class scientist:public employee,public student{
    int publi;
    public:
   void get(){
    employee::get();
    student::get();
    cout<<"Enter the no. publication :";
    cin>>publi;
    cin.ignore();
}
void display(){
    employee::display();
    student::display();
    cout<<"The no. of publication is :"<<publi<<'\n';
}
};
class labour:public employee{
    public:
    void get(){
        employee::get();
    }
    void display(){
        employee::display();
    }
};
int main(){
manager m;
scientist s;
labour l;
cout<<"MANAGER DETAIL :\n";
m.get();
m.display();
cout<<"SCIENTIST DETAIL :\n";
s.get();
s.display();
cout<<"LABOUR DETAIL :\n";
l.get();
l.display();
    return 0;
}