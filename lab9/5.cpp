/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <iostream>
#include<string>
#include <fstream>
using namespace std;
int main()
{
    char ch; unsigned char temp_ch;
    ifstream in("Hello.txt");
    if(!in.is_open()) cout<<"Error main file isn't open :\n";
    ofstream of("Encrypted.txt");
    if(!of.is_open()) cout<<"Error encript file isn't open :\n";
    while(in.get(ch))
    {
    
        temp_ch = ch + 5;
        if(ch>64 && ch<91)
        {
            if(temp_ch>90)  ch  = temp_ch%91 + 65;
            else    ch = temp_ch;
        }
        else if(ch>96 && ch<123)
        {
            if(temp_ch>122)  ch  = temp_ch%123 + 97;
            else    ch = temp_ch;
        }
     else  if(ch==' ')  ch=64;
        of.put(ch);
        cout<<ch;
         if(in.bad()) cout<<"bad bit found :\n";
    }
    in.close();
    of.close();
    return 0;
}