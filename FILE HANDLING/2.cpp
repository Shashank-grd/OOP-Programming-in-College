#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout1,fout2,fout3; //object created
     fout1.open("country.txt"); //1st file
     fout1<<"United states of America \n";
     fout1<<"United Kingdom\n";
     fout1<<"South korea\n";
     fout1.close();
     fout2.open("capital.txt"); //2nd file
     fout2<<"Washington\n";
     fout2<<"London\n";
     fout2<<"Seoul \n";
     fout2.close();
    // const int N =80;
     string line;
     ifstream in1,in2;
     in1.open("country.txt");
     in2.open("capital.txt");
     fout3.open("Merge.txt");
     while(1){
     getline(in1,line);
     fout3<<line<<" : ";
     getline(in2,line);
     fout3<<line<<endl;
     if(in1.eof()!=0 || in2.eof()!=0)  exit(1);
     }
     fout3.close();
     in1.close();
     in2.close();
    return 0;
}