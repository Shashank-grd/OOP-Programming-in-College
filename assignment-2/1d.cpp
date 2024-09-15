#include<iostream>
using namespace std;
class demo{
    int count=0;
    public:
    void inc();
    void check() const;
    void display();
};
void demo::inc(){
    count++;
}
void demo::check()const{
   //count+=100;
}
void demo::display(){
    cout<<"Value can't increase when const use :"<<count<<endl;
}
int main()
{
    demo ob;
    ob.inc();
    ob.check();
    ob.display();
    return 0;
}