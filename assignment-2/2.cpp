#include<iostream>
using namespace std;
int main()
{
    string s1,s2;
    cout<<"Enter string : ";
    getline(cin,s1,'\n');
    cout<<"Enter the test string :";
    getline(cin,s2,'\n');
    int i=0;
    long long int j=0,x=0;
    if(s1[i]==s2[j])
    cout<<"False"<<'\n';
    else{  
   for(i=0;s1[i]!='\0';i++){
    for(j=0;s2[j]!='\0';j++){
       if(s1[i]==s2[j]){
       x=x*10+1;
       break;}
       
    }
   }
    j=0;
    for( i=0;i<s1.length();i++){
    j=j*10+1;}
    if(x==j)
    cout<<"True";
    else
    cout<<"False";}
}