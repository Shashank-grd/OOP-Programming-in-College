/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<stdio.h>
#include<math.h>
int square(int num)
{
int check;
float x;
x=sqrt((double)num);
check=x;
if(check==x)
return 1;
else
return 0;
}
int main()
{
    int n,a,i,b,c,d,e;
    int m,r,o,p;
    printf("enter the 4 digit number :");
    scanf("%d",&n);
    a=square(n);
    if(a==1){
    b=n%10;
    n=n/10;
    c=n%10;
    n=n/10;
    d=n%10;
    n=n/10;
    e=n;
     if(b==c && d==e && b!=d)
     printf("no. is perfect square and condition satisfy");
     else
     printf("no. is perfect square and condition is not satisfied");
    }
    else 
    printf("it's not a perfect square");
    
    return 0;
}