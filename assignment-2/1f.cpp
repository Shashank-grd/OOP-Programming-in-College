#include<iostream>
using namespace std;
class demo{
    int count;
    public:
    void check(int=0);
    void display();
};
void demo::check(int count){
    this->count=count;
}
void demo::display(){
    cout<<"Value count :"<<count<<endl;
}
int main()
{
    int n;
    cout<<"Enter number of object :";
    cin>>n;
    demo ob[n];
    for(int i=0;i<n;i++){
        ob[i];
        ob[i].check(i);
        ob[i].display();
    }

    return 0;
}