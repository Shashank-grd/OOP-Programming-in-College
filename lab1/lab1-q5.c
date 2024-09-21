/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<stdio.h>
int main()
{
    int x,y;
    printf("enter first number  :");
    scanf("%d",&x);
    printf("enter the no. check for multiplier :");
    scanf("%d",&y);
    while(1){
        if(x%y==0){
        printf("the largest multiple is : %d",x);
        break;}
        x++;
    }
    
    return 0;
}