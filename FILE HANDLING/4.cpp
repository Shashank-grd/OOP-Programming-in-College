#include <iostream>
using namespace std;

class employee{
    protected:
        int eno;
        string name;
       
    public:
        void display(){
            cout << eno << name << '\n';
           
        }
   
    employee(int eno , string name) : eno(eno) , name(name){}    
};


class manager : public employee{
   
    protected:
        string title ;
        int salary;
       
       
    public:
        void display(){
            cout << eno << name << title << salary << '\n';
        }
   
    manager(int eno , string name , string title  , int salary) : employee(eno , name) , title(title) , salary(salary) {}  
};

class scientist : public employee{
   
    protected:
        int npub;
       
       
    public:
        void display(){
            cout << eno << name << npub << '\n';
        }
   
    scientist(int eno , string name , int npub) : employee(eno , name) , npub(npub){}  
};

class labrour : public employee{
     public:
        void display(){
            cout << eno << name << '\n';
        }
   
    labrour(int eno , string name ) : employee(eno , name)  {}  
};

int main(){
   
    labrour ob(101 , "abdul chapri");
    manager obb(102 , "babulal" , "clerk" , 100000);
    scientist obbb(103 , "Rakesh Kori" , 20);
   
    ob.display();
    obb.display();
    obbb.display();
   
    employee bappob(100 , "nabbu");
    bappob.display();
   
    return 0;
}