/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main()
{
    char ch;
    int num_lines = 0, num_char = 0, num_words = 0;
    fstream file;
    file.open("Text.txt", ios::in);
    while (file.get(ch)) {
        if (ch != ' ' && ch != '\n') {
            num_char++;
        }
        if (ch == '\n') {
            num_lines++;
        }
        if (ch == ' ' || ch == '\n') {
            num_words++;
        }
    }
    num_lines+=1;
    num_words+=1;
    file.close();
    cout << left << setw(20) << "Number of lines:" << right << setw(5) << num_lines << endl;
    cout << left << setw(20) << "Number of words:" << right << setw(5) << num_words << endl;
    cout << left << setw(20) << "Number of chars:" << right << setw(5) << num_char << endl;
    return 0;
}
