#include<stdio.h>
void check(char *s1)
{
    int d=0,i=0,j=0;
    char a[]="hackerrank";
    while(s1[i]!='\0')
    {
       if(s1[i]==a[j])
       {
        i++;
        j++;
        d=d*10+1;
       }
       else 
       i++;
    }
    if(d==1111111111)
    { printf("yes");}
   


}
int main()
{
    char s[100];
    int m;
    printf("ENTER THE LETTER :");
    gets(s);
    check(s);
    return 0;
}