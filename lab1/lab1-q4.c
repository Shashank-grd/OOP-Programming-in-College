/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<stdio.h>
int check(int arr[],int x)
{
    
     for(int i=1;i<=x;i++)
     {
        if(arr[i]==i)
     return 1;
     }
    return 0 ;
}
int main()
{
    int x,b;
    printf("enter the size of array :");
    scanf("%d",&x);
    int arr[x];
    for(int i=1;i<=x;i++)
    {
        scanf("%d",&arr[i]);
    }
    b=check(arr,x);
    if(b==1)
    printf("true");
    else
    printf("false");
    return 0;
}