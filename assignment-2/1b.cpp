#include<iostream>
using namespace std;
class demo2;
class demo{
    int count=0;
    public:
    friend void check(demo&);
    friend class demo2;
};
class demo2{
    public:
     void display(demo&);
};
void check(demo& ob){
    ob.count++;
    cout<<"Value count=1 using friend function \n";
}
void demo2::display(demo& o){
    o.count++;
    cout<<"Value count=2 using friend class : "<<o.count<<endl;
}
int main()
{
    demo ob;
    demo2 o1;
    check(ob);
    o1.display(ob);
    return 0;
}