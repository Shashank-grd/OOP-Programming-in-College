#include<iostream>
using namespace std;
class demo{
    int count=0;
    public:
    friend void check(demo&);
    void display();
};
void check(demo& ob){
    ob.count++;
}
void demo::display(){
    cout<<"Value increase using friend function :"<<count<<endl;
}
int main()
{
    demo ob;
    check(ob);
    ob.display();
    return 0;
}