#include <iostream>
using namespace std;
class DB;
class DM
{
    int x,y;
public:
    void getdata();
    friend void adddata(DM&,DB&);
};
class DB
{
    int x,y;
public:
    void getdata();
    friend void adddata(DM&,DB&);

};
void DM::getdata()
{
    cout<<"enter the distance in meters";
    cin>>x;
    cout<<"enter the distance in centimeters";
    cin>>y;
}
void DB::getdata()
{
    cout<<"enter the distance in feet";
    cin>>x;
    cout<<"enter the distance in inches";
    cin>>y;
}
void adddata(DM& ob,DB& ob1)
{
    cout<<ob.x*3.28084+ob1.x<<'\n';
    
     cout<<ob.y*0.393701+ob1.y<<endl;
}

int main()
{
    DM ob;
DB ob1;
ob.getdata();
ob1.getdata();
adddata(ob,ob1);
return 0;

}


