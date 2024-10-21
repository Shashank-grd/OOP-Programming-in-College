/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <iostream>
#include <cstring>
using namespace std;
#define max 100
class String {
    char str[max];
public:
    String() {
        strcpy(str,"");
    }
    String(const char* s) {
        strcpy(str, s);
    }
    void display() {
        cout << str << endl;
    }
    friend String operator+(String s1, String s2);
};
String operator+(String s1, String s2) {
    if (strlen(s1.str) + strlen(s2.str) >= max) {
        cout << "String Overflow from the operator function." << endl;
        exit(1);
    }
    strcat(s1.str, " ");
    strcat(s1.str, s2.str);
    return s1;
}
int main() {
    char s1[max],s2[max];
    cout<<"Enter string :";
    gets(s1);
     cout<<"Enter 2nd string :";
    gets(s2);
    String o1(s1);
    String o2(s2); 
    String s3 = o1 + o2;
    s3.display();
    return 0;
}
