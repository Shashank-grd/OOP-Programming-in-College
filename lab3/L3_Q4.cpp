/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <iostream>
using namespace std;

int Add(int num1 , int num2 , int num3){
    return num1 + num2 + num3 ;
}

float Add(float num1 , float num2 , float num3){
    return num1 + num2 + num3 ;
}

float Add(double num1 , double num2 , double num3){
    return num1 + num2 + num3 ;
}

long double Add(long double num1 , long double num2 , long double num3){
    return num1 + num2 + num3 ;
}

int main(){

   
    cout << Add(4.533,695.258,4.25)<<endl;
    cout << Add(545,285,25)<<endl;
    cout << Add(1.56662352316,1.2558996553,1.335665555582)<<endl;
    cout << Add(0.2222222222222222222222222,0.2222222222222222,0.222222222222222222)<<endl;
    return 0;
}
