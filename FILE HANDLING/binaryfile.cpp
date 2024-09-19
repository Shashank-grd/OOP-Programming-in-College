#include <iostream>
#include <fstream>
#include<cstring>
int main() {
    // Writing binary data to a file
    const char* data = "Hello, binary world!";
    std::ofstream outfile("binary_file.bin", std::ios::binary);
    outfile.write(data, sizeof(char) * strlen(data));
    outfile.close();
    std::cout << "Binary data written to file." << std::endl;

    // Reading binary data from a file
    std::ifstream infile("binary_file.bin", std::ios::binary);
    if (infile) {
        // Get the length of the file
        infile.seekg(0, std::ios::end);
        std::streampos fileSize = infile.tellg();
        infile.seekg(0, std::ios::beg);

        // Allocate memory to store the file contents
        char* buffer = new char[fileSize];

        // Read the file
        infile.read(buffer, fileSize);

        // Close the file
        infile.close();

        std::cout << "Read binary data: " << buffer << std::endl;

        // Clean up allocated memory
        delete[] buffer;
    }
    else {
        std::cout << "Failed to open the file." << std::endl;
    }

    return 0;
}
