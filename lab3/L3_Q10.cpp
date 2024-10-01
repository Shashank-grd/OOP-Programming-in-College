#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

struct EnginePart {
    char serialNumber[4];
    int yearOfManufacturing;
    char materialType[10];
    int quantity;
};

int main() {
    EnginePart parts[60];

    // Generate serial numbers from AA0 to FF9
    char serialNum[4] = "AA0";
    for (int i = 0; i < 60; i++) {
        strcpy(parts[i].serialNumber, serialNum);
        if (serialNum[2] < '9') {
            serialNum[2]++;
        } else if (serialNum[1] < 'F') {
            serialNum[1]++;
            serialNum[2] = '0';
        } else if (serialNum[0] < 'F') {
            serialNum[0]++;
            serialNum[1] = 'A';
            serialNum[2] = '0';
        }
    }

    // Randomly initialize year of manufacturing, material type and quantity
    srand(time(NULL));
    for (int i = 0; i < 60; i++) {
        parts[i].yearOfManufacturing = rand() % 29 + 1990;
        int randNum = rand() % 3;
        switch (randNum) {
            case 0:
                strcpy(parts[i].materialType, "Steel");
                break;
            case 1:
                strcpy(parts[i].materialType, "Aluminum");
                break;
            case 2:
                strcpy(parts[i].materialType, "Iron");
                break;
        }
        parts[i].quantity = rand() % 1000 + 1;
    }

    // Display parts information between given range of serial numbers
    char startSerialNum[4] = "BB1";
    char endSerialNum[4] = "CC6";
    cout << "Parts information between " << startSerialNum << " and " << endSerialNum << endl;
    for (int i = 0; i < 60; i++) {
        if (strcmp(parts[i].serialNumber, startSerialNum) >= 0 && strcmp(parts[i].serialNumber, endSerialNum) <= 0) {
            cout << "Serial Number: " << parts[i].serialNumber << endl;
            cout << "Year of Manufacturing: " << parts[i].yearOfManufacturing << endl;
            cout << "Material Type: " << parts[i].materialType << endl;
            cout << "Quantity: " << parts[i].quantity << endl << endl;
        }
    }

    return 0;
}
