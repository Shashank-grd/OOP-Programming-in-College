/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outf("names.txt");
    if (!outf) {
     cout << "Error opening output file" << endl;
        exit(1);
    }
    
    string firstName, middleInitial, lastName;
    unsigned long employeeNumber;
    
    while (1) {
        cout << "Enter first name, middle initial, last name, and employee number: ";
        cin >> firstName;
        if (firstName == "done") {
            break;
        }
        cin >> middleInitial >> lastName >> employeeNumber;
        outf << firstName << " " << middleInitial << " " << lastName << " " << employeeNumber << endl;
    }
    
    outf.close();
    
    ifstream inf("names.txt");
    if (!inf) {
     cout << "Error opening input file" << endl;
        exit(1);
    }
    
    while (1) {
        inf >> firstName >> middleInitial >> lastName >> employeeNumber;
        cout << "Name: " << firstName << " " << middleInitial << " " << lastName << endl;
        cout << "Employee Number: " << employeeNumber << endl;
        if(inf.eof() !=0)  exit(1);
    }
    
    inf.close();
    
    return 0;
}
