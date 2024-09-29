/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/

#include <iostream>
using namespace std;

void Add(int &a , int &b , int &c , int &d){

    int num = (a*d + b*c);
    int deno =(b*d);

    cout << num << "/" << deno << '\n' ;
}
void Subtract(int &a , int &b , int &c , int &d){

    int num = (a*d - b*c);
    int deno =(b*d);

    cout << num << "/" << deno << '\n' ;
}
void Multiply(int &a , int &b , int &c , int &d){

    int num = (a*c);
    int deno =(b*d);

    cout << num << "/" << deno << '\n' ;
}
void Division(int &a , int &b , int &c , int &d){

    int num = (a*c);
    int deno =(b*d);

    cout << num << "/" << deno << '\n' ;
}

int main(){

    int a , b , c , d ;
    char op;

    cout << "Enter a and b: " << '\n' ;
    cin >> a >> b ;
    cout << "enter Operator: " << '\n' ;
    cin >> op;
    cout << "Enter c and d: " << '\n' ;
    cin >> c >> d;

    if(op == '+') Add(a,b,c,d);
    else if(op == '-') Subtract(a,b,c,d);
    else if(op == '*') Multiply(a,b,c,d);
    else if(op == '/') Division(a,b,c,d);
    else cout << "Invalid Entry" ;

    return 0;
}
