#include<iostream>
using namespace std;
class vehicle{
    protected:
int mileage;
int price;
public:
vehicle(){
    cout<<"Enter the mileage :";
    cin>>mileage;
    cout<<"Enter the price :";
    cin>>price;
}};
  class car:public vehicle{
    protected:
    string fuel;
    int capacity;
    int warrenty;
    int cost;
    public:
    car(){
        cout<<"Enter fuel type :";
        cin>>fuel;
        cout<<"Enter seat capacity :";
        cin>>capacity;
        cout<<"Enter warrenty in year :";
        cin>>warrenty;
        cout<<"Enter the customer cost :";
        cin>>cost;
    }};
    class bike:public vehicle{
        protected:
        int cylinder;
        int gear;
        string type;
        string wheel_type;
        int fuel;
        public:
        bike(){
        cout<<"Enter no. of cylinder :";
        cin>>cylinder;
        cout<<"Enter no. of gear :";
        cin>>gear;
        cout<<"Enter cooling type (air, liquid or oil):";
        cin>>type;
        cout<<"Enter wheel type(alloys or spokes) :";
        cin>>wheel_type;
        cout<<"Enter fuel tank size(in inches) :";
        cin>>fuel;
        } };
  class audi:public car{
            string model;
            public:
            audi(){
                cout<<"Enter model name :";
                cin>>model;
            }
        void display(){
        cout<<"mileage is :"<<mileage;
        cout<<"\nprice is :" <<price;
        cout<<"\nfuel type :"<<fuel;
        cout<<"\nseat capacity :"<<capacity;
        cout<<"\nwarrenty in year :"<<warrenty;
        cout<<"\nthe customer cost :"<<cost;
        cout<<"\nmodel no. :"<<model;
        }};
     class fordcar:public car{
            string model;
            public:
            fordcar(){
                cout<<"Enter model name :";
                cin>>model;
            }
        void display(){
        cout<<"mileage is :"<<mileage;
        cout<<"\nprice is :" <<price;
        cout<<"\nfuel type :"<<fuel;
        cout<<"\nseat capacity :"<<capacity;
        cout<<"\nwarrenty in year :"<<warrenty;
        cout<<"\nthe customer cost :"<<cost;
        cout<<"\nmodel no. :"<<model;
        }};
    class bajaj:public bike{
        string make_type;
        public:
        bajaj(){
            cout<<"Enter make type :";
            cin>>make_type;
        }
        void display(){
        cout<<" mileage is :"<<mileage;
        cout<<"\nprice is :" <<price;
        cout<<"\nno. of cylinder :"<<cylinder;
        cout<<"\nno. of gear : "<<gear;
        cout<<"\ncooling type :"<<type;
        cout<<"\nwheel type :"<<wheel_type;
        cout<<"\nfuel tank size :"<<fuel;
        cout<<"\nmake type is :"<<make_type;
        }
    };
    class tvs:public bike{
        string make_type;
        public:
        tvs(){
            cout<<"Enter make type :";
            cin>>make_type;
        }
        void display(){
        cout<<" mileage is :"<<mileage;
        cout<<"\nprice is :" <<price;
        cout<<"\nno. of cylinder :"<<cylinder;
        cout<<"\nno. of gear : "<<gear;
        cout<<"\ncooling type :"<<type;
        cout<<"\nwheel type :"<<wheel_type;
        cout<<"\nfuel tank size :"<<fuel;
        cout<<"\nmake type is :"<<make_type;
        }
    };
int main()
{
    cout<<"Give Audi detail :\n";
    audi a;
    cout<<"Give Fordcar detail :\n";
    fordcar b;
    cout<<"Give bajaj detail :\n";
    bajaj c;
    cout<<"Give tvs detail :\n";
    tvs d;
    cout<<"Audi detail :\n";
    a.display();
    cout<<"\nFordcar detail :\n";
    b.display();
    cout<<"\nBajaj detail :\n";
    c.display();
    cout<<"\nTvs detail :\n";
    d.display();
    return 0;
}