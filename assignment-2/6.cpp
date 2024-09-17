#include<iostream>
using namespace std;
class check {
private:
    int data;
public:
     check(int data):data(data) {
        this->data += data;
    }
    void display(){
        cout<<"The no. is :"<<data<<endl;
    }
};

int main()
{int d;
    cout<<"Enter no. to assign class data and to add same no. in class data :";
    cin>>d;
    check c(d);
    c.display();
    return 0;
}