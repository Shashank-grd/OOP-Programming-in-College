/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     string line[30];
     int i=0;
     string s;
     ifstream inf;
     inf.open("read.txt");
     if(!inf.is_open()) cout<<"Error file isn't open :\n";
     while(getline(inf,s)){
     line[i]=s;
     i++;
     if(inf.bad()) cout<<"bad bit found :\n";
     }
     for(int j=0;j<i;j++)
     cout<<line[j]<<'\n';
    return 0;
}