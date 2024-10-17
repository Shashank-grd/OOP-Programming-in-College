/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<stdio.h>
void minmax( int a[], int len, int *min, int *max){ 
    for (int i=1;i<len;i++)
        {
            
            if(a[i]>*max)
            *max =a[i];
            if(a[i]<*min)
           *min=a[i];
        }
       
        printf("the max value : %d\n ",*max);
         printf("the min value : %d\n ",*min);
}
int main()
{
    int size,i,j;
     printf("enter the values of size :");
     scanf("%d",&size);
     int arr[size];
     for(i=0;i<size;i++)
        scanf("%d",&arr[i]);
        int max= arr[0];
        int min= arr[0];
       minmax(arr,size,&min,&max);
        return 0;
}