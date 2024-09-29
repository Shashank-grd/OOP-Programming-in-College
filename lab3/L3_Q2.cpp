/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/

#include <iostream>
using namespace std ;

void minmax( int array[], int length, int &min, int &max){

    for(int i = 0 ; i<length ; i++){
        if(max < array[i]){
            max = array[i];
        }

        if(min > array[i]){
            min = array[i];
        }
    }
}

int main(){

    int l;
    printf("ENTER THE SIZE OF ARRAY :");
    scanf("%d",&l);

    int a[l];
    for(int i=0;i<l;i++)
    scanf("%d",&a[i]);

    int min = a[0];
    int max = a[0];

    minmax(a, l, min, max);

    cout << "Minimum value is : " << min << '\n' << "Maximum value is : " << max ;

return 0;

}


