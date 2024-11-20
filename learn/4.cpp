#include<iostream>
using namespace std;
class prob{
    int s;
    int arr[100];
    public :
    void get();
    void chu();
    void def();
};
void prob::get(){
    cout<<"enter the size";
    cin>>s;
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
}
void prob::chu(){
      for(int i=0;i<s;i++)
      cout<<arr[i]<<" ";
}
void prob::def(){
    int c=0;
    for(int i=0;i<s;i++){
        if(arr[i]==arr[i+1])
        c++;
    }
    cout<<c<<endl;
}
int main(){
    prob s1;
    s1.get();
    s1.chu();
    s1.def();
    return 0;
}