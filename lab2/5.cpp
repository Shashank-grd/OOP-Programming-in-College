/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;  }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;  }  }
    return true;
}
int main() {
    int L, R,i,j;
    cin >> L >> R;

    int a[100],x=0;
    for (i = L; i <= R; i++) {
        if (isPrime(i)) {
            a[x] = i;
            x++;   
        }
    }
    int arr[100],z=0;cout<<"prime no. are :";
         for ( i = 0; i <x; i++)
          {
            cout<<a[i]<<" ,";
          while(a[i]>0){
             arr[z] =a[i]%10;
             a[i]/=10;
             z++;
          }
          }
         int maximum=0,v=0,m;
           for ( i = 0; i <z; i++){
            v=0;
            for( j=0;j<z;j++){
                if(arr[i]==arr[j])
                v++;
            }
            if(v>maximum){
            maximum=v;m=arr[i];
           }}
           cout<<'\n'<<m<<" occur "<<maximum<<" times."<<'\n';
           if(x<2)
           cout<<"-1";
    return 0;
}
