/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<stdio.h>
void add(int s1,int s2,int a[s1][s2],int b[s1][s2]){
    int c[s1][s2],i,j;
        for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            printf("%d\t",c[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int s1,s2,i,j,z,k,sum=0;
    printf("enter size of row matrix :");
    scanf("%d",&s1);
    printf("enter the size of columb :");
    scanf("%d",&s2);
    int a[s1][s2];
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("input elements of second order :\n");
    int b[s1][s2];
    for(i=0;i<s1;i++)
    {
        for(j=0;j<s2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    add(s1,s2,a,b);
    
    return 0;
    }