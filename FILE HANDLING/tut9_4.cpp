#include <iostream>
#include <fstream>
#include <string>
#include <iomanip> 
using namespace std;

int main() {
    string filename = "TEXT.txt";
    string line;
    int numLines = 0, numWords = 0, numChars = 0;
    ofstream outfile(filename);
    outfile << "This is some text\n"
            << "for tedting only\n"
            << "this program\n";
    outfile.close();
    ifstream infile(filename);
    while (getline(infile, line)) {
        numLines++;
        numChars += line.length();
          for (int i = 0; i < line.length(); i++) {
            if (line[i] != ' ' && line[i] != '\t') {
                numWords++;

                // Increment the word count only once for a sequence of non-whitespace characters
                while (i < line.length() && line[i] != ' ' && line[i] != '\t') {
                    i++;
                }
            }
        }
    }
    infile.close();
    cout << left << setw(20) << "Number of lines:" << right << setw(5) << numLines << endl;
    cout << left << setw(20) << "Number of words:" << right << setw(5) << numWords << endl;
    cout << left << setw(20) << "Number of chars:" << right << setw(5) << numChars << endl;

    return 0;
}
