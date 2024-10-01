#include <iostream>
#include <string>
using namespace std;
class Order {
private:
    int tableNumber;
    string serverName;
    int numPatrons;
    static double tableMinCharge;

public:
    static void display() {
        cout << "Table minimum charge: " << tableMinCharge <<"$"<< endl;
    }
};
double Order::tableMinCharge = 4.75;

int main() {
  
    Order::display();
    return 0;
}
