#include <iostream>
using namespace std;

class Shirt {
public:
    int collarSize;
    int sleeveLength;
    
   void getdata(int collar, int sleeve) {
        collarSize = collar;
        sleeveLength = sleeve;
    }
};

class Pants {
public:
    int waistSize;
    int inSeam;
    
    void input(int waist, int inS) {
            waistSize = waist;
       inSeam = inS;
    }
};

void displayClothingFacts(Shirt shirt) {
    cout << "Shirt collar size: " << shirt.collarSize << endl;
    cout << "Shirt sleeve length: " << shirt.sleeveLength << endl;
}

void displayClothingFacts(Pants pants) {
    cout << "Pants waist size: " << pants.waistSize << endl;
    cout << "Pants inseam: " << pants.inSeam << endl;
}

int main() {
    // prompt user for input
    int collar, sleeve, waist, inS;
    cout << "Enter the collar size of the shirt: ";
    cin >> collar;
    cout << "Enter the sleeve length of the shirt: ";
    cin >> sleeve;
    cout << "Enter the waist size of the pants: ";
    cin >> waist;
    cout << "Enter the inseam of the pants: ";
    cin >> inS;
    
    // create objects with user input and assign values
    Shirt ob;
    ob.getdata(collar, sleeve);
    Pants ob1;
    ob1.input(waist, inS);
    
    // call displayClothingFacts with both types of clothing
    displayClothingFacts(ob);
    displayClothingFacts(ob1);
    
    return 0;
}
