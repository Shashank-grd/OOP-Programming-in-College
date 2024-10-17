/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;

class student {
   int roll;
   string name;
   public:
    void set_data(int, string);
    void show_data();
};

void student::set_data(int r, string n) {
    roll = r;
    name = n;
}

void student::show_data() {
    cout << "Student name: " << name << endl;
    cout << "Roll no.: " << roll << endl;
}

int main() {
    int x, r;
    string n;
    cout << "Enter the number of students: ";
    cin >> x;
    cout << "Give input" << '\n';
    student s1[x];
    for (int i = 0; i < x; i++) {
        cout << i + 1 << " Student name: ";
        cin >> n;
        cout << "Roll no.: ";
        cin >> r;
        s1[i].set_data(r, n);
    }
     for( int i=0;i<x;i++)
    {
        s1[i].show_data();
    }
    return 0;
}
