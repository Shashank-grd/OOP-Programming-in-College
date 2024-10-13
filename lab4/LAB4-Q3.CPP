/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;
class DB;
class DM{
int met;
int centi;
public :
    void getdata();
    friend void use(DM&,DB&);
};
void DM::getdata(){
    cout<<"ENTER THE VALUE IN METER :";
    cin>>met;
    cout<<"ENTER THE VALUES IN CENTIMETERS :";
    cin>>centi;
    }
class DB{
int feet;
int inch;
public:
    void gedata();
    friend void use(DM&,DB&);
};
void DB::gedata(){
     cout<<"ENTER THE VALUES IN FEET :";
     cin>>feet;
     cout<<"ENTER THE VALUES IN INCH :";
     cin>>inch;
}
void use(DM&o1,DB& o2){
    cout<<"the value is :"<<o2.feet+3.28*o1.met<<" feet and "<<o2.inch+0.393*o1.centi<<" inch";


}
int main(){
    DM o1;
    DB o2;
    o1.getdata();
    o2.gedata();
    use(o1,o2);
    return 0;
}
