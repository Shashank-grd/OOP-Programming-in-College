/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     ofstream outf;
     outf.open("merge.txt");
     string s;
     ifstream inf,inf1;
     inf.open("source1.txt");
     inf1.open("source2.txt");
     if(!inf.is_open()) cout<<"Error file isn't open :\n";
     while(1){
     getline(inf,s);
      outf<<s<<" : ";
     getline(inf1,s);
    outf<<s<<endl;
     if(inf.eof()!=0) {  cout<<"exit from source1 code :";
     exit(1);}
     else if(inf1.eof()!=0)  { cout<<"exit from source2 code :";
     exit(1);}
     if(inf.bad()) cout<<"bad bit found :\n";
     }
     inf1.close();
     inf.close();
     outf.close();
    return 0;
}