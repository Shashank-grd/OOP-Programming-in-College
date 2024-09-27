/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <stdio.h>
#include <string.h>
void check(char *s1,char *s2){
if(strlen(s1)==strlen(s2))
    {int i,c=0;
    	for(i=0;s2[i]!='\0';i++)  
        {
        	if(s1[i]==s2[i])
        	 c++;
 	    }
 	    if(c==i)
          printf("strings are equal");
        else
          printf("strings are not equal");
    }
    else
     printf("strings are not equal");
}
 
int main()
{
    char s1[1000],s2[1000];
 
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
    check(s1,s2);
    return 0;
}