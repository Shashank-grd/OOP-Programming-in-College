#include <iostream>
#include <cstdlib> 
#include <ctime> 
using namespace std;
int flip() {
return rand() % 2;
}
int main() {
srand(time(0)); 
int heads = 0, tails = 0;
for (int i = 0; i < 100; i++) {
int result = flip(); 
if (result == 0) {
cout << "Tails" << endl;
tails++;
} else {
cout << "Heads" << endl;
heads++;
}
}
cout << "Heads: " << heads << endl;
cout << "Tails: " << tails << endl;
return 0;
}