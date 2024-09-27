/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <iostream>
using namespace std;
template <class T>
T max_element(T arr[],int size) {
    T max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int size1 , size2 , size3,i;
    cout<<"Enter (-1)  to stop input :"<<'\n';
    cout<<"Enter the intiger array : ";
    int arr[100];
    for(i=0; ;i++){
    cin>>arr[i];
    if(arr[i]==-1) break;
    }
    size1=i;
    int intmax = max_element(arr , size1);
    cout << "Maximum element in the integer array: " << intmax << endl;

    float farr[100];
    cout<<"Enter the float array : ";
    for(i=0; ;i++){
    cin>>farr[i];
    if(farr[i]==-1) break;
    }
    size2=i;
    float floatmax = max_element(farr,size2);
    cout << "Maximum element in the float array: " << floatmax << endl;

    char carr[100];
    cout<<"Enter the char array (! to stop): ";
    for(i=0; ;i++){
    cin>>carr[i];
    if(carr[i]=='!') break;
    }
    size3=i;
    char maxchar = max_element(carr,size3);
    cout << "Maximum element in the char array: " << maxchar << endl;

    return 0;
}
