/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<stdio.h>
void strcat(char *s,char *t){
    int z,i;
 z=strlen(s);

    for(i=0;t[i]!='\0';i++)
    { 
        s[z+i]=t[i];
    
    }
     s[z+i]='\0';
    
    printf("after concatenate : %s",s);


}

int main()
{
    char s[100];
    char t[100];
    int i,z;
    printf("enter the 1st string :");
    gets(s);
     printf("enter the 2nd string :");
     gets(t);
     strcat(s,t);

   

    return 0;
}