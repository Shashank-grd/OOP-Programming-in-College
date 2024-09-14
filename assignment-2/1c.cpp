#include <iostream>
using namespace std;
class check{
private:
    static int c;
public:
    static void display() {
        cout << "Display Value using static data member and static member function : " << c << endl;
    }
};
int check::c = 100;

int main() {
  
    check::display();
    return 0;
}
