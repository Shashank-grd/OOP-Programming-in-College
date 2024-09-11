#include <iostream>
using namespace std;
long hms_to_secs(int hours, int minutes, int seconds) {
return hours * 3600 + minutes * 60 + seconds;
}
int main() {
int h,m,s;
char colon;
while (1) {
    cout<<"exit press '00' :"<< "\n";
cout << "Enter a time in the format HH:MM:SS :";
cin >> h;
if (h == 00) {
    cout<<"thank you";
break;
}
cin >> colon >> m >> colon >> s;
cout << "your entered time in seconds is :" << hms_to_secs(h, m, s)<<endl;
}
return 0;
}