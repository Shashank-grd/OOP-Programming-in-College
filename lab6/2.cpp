/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;
class rational{
    int num;
    int den;
    public:
    void input();
    rational operator +(rational&);
    rational operator -(rational&);
    rational operator /(rational&);
    rational operator *(rational&);
    void display();
};
void rational::input(){
    cout<<"Enter numerator :";
    cin>>num;
    cout<<"Enter denomenator :";
    cin>>den;
    if(den==0){
    cout<<"Invalid input \nplease give again :";
    cin>>den;
    }
}
rational rational::operator +(rational& ob){
    this->num = num*ob.den+ob.num*den;
   this-> den=den*ob.den;
   return *this;
}
rational rational::operator -(rational& ob){
    this->num = num*ob.den - ob.num*den;
   this-> den=den*ob.den;
   return *this;
}
rational rational::operator *(rational& ob){
    this->num = num*ob.num;
   this-> den=den*ob.den;
   return *this;
}
rational rational::operator /(rational& ob){
    this->num = num*ob.den;
    this->den = den*ob.num;
   return *this;
}
void rational::display(){
    cout<<"rational no :";
    cout<<num<<"/"<<den<<endl;
}
int main()
{
    rational ob,ob1,ob3;
    ob.input();
    ob1.input();
    char c;
    cout << "enter Operator to perform: " ;
    cin >> c;
    if(c == '+') 
       ob3=ob+ob1;
    else if(c == '-') 
    ob3=ob-ob1;
    else if(c == '*') 
    ob3=ob*ob1;
    else if(c == '/') 
    ob3=ob/ob1;
    else cout << "Invalid Entry" ;
    ob3.display();
    return 0;
}