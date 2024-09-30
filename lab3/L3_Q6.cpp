/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/

#include <iostream>
using namespace std;

class Rectangle{
    private:
            int length , width;
    public:
            void inputs();
            void area();
            void perimeter();
    };

void Rectangle::inputs(){
    cout << "Enter Length: ";
    cin >> length;
    cout << "Enter Width: ";
    cin >> width;
    }

void Rectangle::area(){
    cout << "Area of Rectangle is: " << length * width << '\n';
    }

void Rectangle::perimeter(){
    cout << "Perimeter of Rectangle is: " << 2*(length + width);
    }

int main(){
    Rectangle TestObject;

    TestObject.inputs();
    TestObject.area();
    TestObject.perimeter();

return 0;
}


