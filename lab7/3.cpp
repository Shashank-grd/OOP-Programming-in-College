/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <iostream>
using namespace std;
class Mother {
    string n;
public:
   Mother(string s): n(s){}
    void display() {
        cout << n << endl;
    }};
class Daughter : public Mother {
    string s2;
public:
  Daughter(string s,string s1):Mother(s),s2(s1){}
    void display() {
        cout << s2<< endl;
    }};
int main() {
    string s1,s2;
    cout<<"Enter message of mother :";
    getline(cin,s1);
    cout<<"Enter message of Daughter :";
    getline(cin,s2);
    Daughter obj(s1,s2);
     obj.Mother::display();
    obj.display(); 
    return 0;
}
