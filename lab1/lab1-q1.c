/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<stdio.h>
int fact(int x)
{
    static int res=1;
    if(x==0)
    return res;
    else
    res=res*x;
    return fact(x-1);
}
int main()
{
    int a,b;
    printf("ENTER THE NUMBER :");
    scanf("%d",&a);
    b=fact(a);
    printf("factorial of the no is : %d",b);
    return 0;
}