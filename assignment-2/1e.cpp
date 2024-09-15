#include<iostream>
using namespace std;
class demo{
    int count;
    public:
     demo(int=0);
    void display();
};
demo::demo(int count){
    this->count=count;
}
void demo::display(){
    cout<<"Value count :"<<count<<endl;
}
int main()
{
    demo ob;
    demo ob1(100);
    cout<<"default parameter\n";
    ob.display();
    cout<<"passing parameter\n";
    ob1.display();
    return 0;
}