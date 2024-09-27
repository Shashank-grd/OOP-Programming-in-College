/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <stdio.h>
void rev(long double arr[],int n){
    long double temp;
    for(int i = 0; i<n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;
    }
    for(int i = 0; i < n; i++){
        printf("%ld,", arr[i]);
    }

}
int main(){
    int n,i;
    
    printf("enter the size of array :");
    scanf("%d",&n);
    long double arr[n];
     for(i=0;i<n;i++)
        scanf("%ld",&arr[i]);
    rev(arr,n);
    return 0;
}