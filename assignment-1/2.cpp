#include <iostream>
using namespace std;
struct date {
int day;
int month;
int year;
};
int main() {
date s1;
char slash;
cout << "Enter a date (format dd/mm/yyyy) :";
cin >> s1.day >> slash >> s1.month >> slash >> s1.year;
cout << "The date you entered is: " << s1.day << "/" << s1.month << "/" << s1.year << endl;
return 0;
}