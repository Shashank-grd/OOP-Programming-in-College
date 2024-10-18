#include<iostream>
using namespace std;
class base{
public:
virtual ~base(){
    cout<<"bAase des :";
}
};
class der:public base{
    public:
    ~der(){
        cout<<"dev call :";
    }
};
int main()
{
    base *b;
    b=new der;
    delete b;
    return 0;
}