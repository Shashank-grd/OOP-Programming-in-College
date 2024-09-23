/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<stdio.h>
int strend(char *s,char*t){
    int  i=0,j=0;
    while(s[i]=='\0'){
        if(s[i]==t[j]){
            i++;j++;
         if( s[i]=='\0'&& t[j]=='\0')
         printf("to");
         return 1;}
         else{
         i++;j=0;}

         return 0;
    }
}
int main()
{
     char s[100];
    char t[100];
    int z;
    printf("enter the 1st string :");
    gets(s);
     printf("enter the 2nd string :");
     gets(t);
 z=strend(s,t);
     if(z==1)
     printf("1");
     else 
     printf("0");
    return 0;
}