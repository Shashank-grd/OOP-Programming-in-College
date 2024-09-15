/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/

#include <iostream>
using namespace std;

void Swap(int &num1 , int &num2){

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
}

int main(){

    int num1 , num2 ;


    cout << "Enter numbers: " ;
    cin >> num1 >> num2 ;

    cout << "Before Swapping: "<< num1 << " " << num2  << '\n' ;
    Swap(num1 , num2);
    cout << "After Swapping using reference variable : " << num1 << " " << num2 ;

    return 0;
}
