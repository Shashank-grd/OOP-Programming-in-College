/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;
class student{
protected:
string name;
int roll;
public:
    void input(){
        cout<<"Enter the name of student :";
        getline(cin, name);
        cout<<"Enter the roll no. :";
        cin>>roll;
        cin.ignore(); }
};
class Exam:public student{
protected:
    int marks[6];
public:
    void marksinput(){
        cout<<"Enter the marks :";
    for(int i=0;i<6;i++)
        cin>>marks[i];
        cin.ignore();
    }};
class result:public Exam{
public:
    void display();
};
void result::display(){
    int x =0;
    for(int i=0;i<6;i++)
    x = x+ marks[i];
    cout<<"student name :"<<name<<"\nRoll no. :"<<roll<<"\nMarks obtained :"<<x<<"\n";
}
int main(){
int n;
cout<<"Enter the no. of student :";
cin>>n;
cin.ignore();
result ob[n];
for(int i=0;i<n;i++){
ob[i].input();
ob[i].marksinput();}
for(int i=0;i<n;i++)
    ob[i].display();
return 0;
}
