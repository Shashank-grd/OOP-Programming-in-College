#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream infile1("Source1");
    ifstream infile2("Source2");
    ofstream outfile("Target");

    int num1, num2;
    bool read1 = static_cast<bool>(infile1 >> num1);
    bool read2 = static_cast<bool>(infile2 >> num2);

    while (read1 || read2) {
        if (!read2 || (read1 && num1 <= num2)) {
            outfile << num1 << "\n";
            read1 = static_cast<bool>(infile1 >> num1);
        } else {
            outfile << num2 << "\n";
            read2 = static_cast<bool>(infile2 >> num2);
        }
    }

    infile1.close();
    infile2.close();
    outfile.close();
    return 0;
}
