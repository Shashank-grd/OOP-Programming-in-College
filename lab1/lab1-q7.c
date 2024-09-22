/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<stdio.h>
int length(char *s1){
    int i=1;
while(s1[i]){
    i++;
}
return i;
}
int main()
{
    char str[100];
    printf("enter the sentence :");
    gets(str);
   int x= length(str);
    printf("the length of string is : %d",x);
    return 0;
}