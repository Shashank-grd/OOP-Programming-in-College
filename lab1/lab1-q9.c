/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<stdio.h>
int main()
{
    int size,i;
    printf("enter the size of array :");
    scanf("%d",&size);
    int arr[size-1];
    for(i=0;i<size-1;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<=size;i++)
    {
        if(i!=arr[i-1])
        {
            printf("%d is missing ",i);
            break;
           
        }
    }
    return 0;
}