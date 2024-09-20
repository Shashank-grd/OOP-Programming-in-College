/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     ofstream outf;
     outf.open("write.txt");
     outf << "jaypee university of engineering and technology\n";
     outf << "computer science department ";
     outf.close();
     string s;
     ifstream inf;
     inf.open("write.txt");
     ofstream outf1;
     outf1.open("c.txt");
     if(!inf.is_open()) cout<<"Error file isn't open :\n";
     while(getline(inf,s)){
        for(int i=0;i<s.length();i++){
             if (i == 0 || s[i - 1] == '\n' || s[i - 1] == ' ')
        {
            s[i] = toupper(s[i]);
        }
        }
     outf1<<s<<endl;
     if(inf.bad()) cout<<"bad bit found :\n";
     }
    return 0;
}