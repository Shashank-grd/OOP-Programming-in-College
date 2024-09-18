#include <iostream>

#include <fstream>

using namespace std;

int main () {

//create a text file named file before running.

ofstream ofile;

ofile.open ("file.txt");

ofile<< "geeksforgeeks", 13;

ofile.seekp (8);

ofile<< " geeks", 6;

ofile.close();

return 0;

}