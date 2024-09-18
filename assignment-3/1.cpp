#include<iostream>
using namespace std;
class student{
    protected:
    string name;
    int branch_no;
    public:
    void getdata(){
        cout<<"Enter the name of student :";
        cin.ignore();
        getline(cin,name,'\n');
    }
};
class cse:public student{
int sub1,sub2,sub3;
public:
cse(){
    getdata();
    cout<<"Enter Cse marks (subject1,subject2,subject3):";
    cin>>sub1>>sub2>>sub3;
}
void display(){
    branch_no=1;
    cout<<"\nBranch no. :"<<branch_no<<"\nname :"<<name;
    cout<<"\nmarks obtained :"<<sub1+sub2+sub3;
}
};
class ece:public student{
int sub1,sub2,sub3;
public:
ece(){
    getdata();
    cout<<"Enter Ece marks (subject1,subject2,subject3) :";
    cin>>sub1>>sub2>>sub3;
    cin.ignore();
}
void display(){
    branch_no=2;
    cout<<"\nBranch no. :"<<branch_no<<"\nname :"<<name;
    cout<<"\nmarks obtained :"<<sub1+sub2+sub3;
}
};
int main()
{
    int n,b;
    cout<<"Enter the no. of CSE student :";
    cin>>n;
    cin.ignore();
    cse arr[n];
    cout<<"Enter the no. of ECE student :";
    cin>>b;
    cin.ignore();
    ece a[b];
    for(int i=0;i<n;i++)
    arr[i].display();
    for(int i=0;i<n;i++)
    a[i].display();
    return 0;
}