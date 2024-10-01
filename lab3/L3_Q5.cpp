/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/

#include <iostream>
using namespace std;


void Movie(string name , int time=90 ){
    cout << "Movie : " << name << '\n' << "Duration :" << time<<endl;
}
int main(){

    int time ;
    string name ;
    cout << "Enter Movie Name: ";
    getline(cin, name, '\n');
    cout << "Enter Movie Time: ";
    cin >> time;

    Movie(name , time);
    Movie(name);
    return 0;
}

