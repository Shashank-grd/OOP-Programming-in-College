/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
     ofstream outf;
     outf.open("sort.txt");
     int arr[100],i=0;
     ifstream inf,inf1;
     inf.open("source1a.txt");
     inf1.open("source2b.txt");
     if(!inf.is_open()) cout<<"Error file isn't open :\n";
     while(1){
     inf>>arr[i];
     i++;
     inf1>>arr[i];
     i++;
     for(int a=0;a<i;a++)
     for(int b=0;b<i-a-1;b++)
     if(arr[b] > arr[b+1])
        swap(arr[b],arr[b+1]);
     if(inf.bad()) cout<<"bad bit found :\n"; 
     if(inf.eof()!=0) {  cout<<"exit from source1 code :";
     break;}
     else if(inf1.eof()!=0)  { cout<<"exit from source2 code :";
     break;}
     
     }
      for(int a=0;a<i;a++){
      outf<<arr[a]<<" , ";
     cout<<arr[a]<<" ";
     }
     
     inf1.close();
     inf.close();
     outf.close();
    return 0;
}