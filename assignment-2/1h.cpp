#include<iostream>
using namespace std;
class demo2;
class demo{
    int count=0;
    public:
    void check(demo&);
    friend class demo2;
};
class demo2{
    public:
     void display(demo&);
};
void demo::check(demo& ob){
    ob.count++;
    cout<<"Value count=1 by  passing object \n";
}
void demo2::display(demo& o){
    o.count++;
    cout<<"Value count=2  by  passing object : "<<o.count<<endl;
}
int main()
{
    demo ob;
    demo2 o1;
    ob.check(ob);//passing object to a member function
    o1.display(ob);
    return 0;
}