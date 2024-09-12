#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void generateQuestion(int difficulty, int& num1, int& num2) {
switch(difficulty) {
case 1:
num1 = rand() % 10;
num2 = rand() % 10;

break;
case 2:
num1 = rand() % 90 + 10;
num2 = rand() % 90 + 10;
break;

}
}
int main() {
srand(time(0)); 
int num1, num2, ans, correct = 0, incorrect = 0;
int difficulty = 1;
int isCorrect = 0;
while(true) {
generateQuestion(difficulty, num1, num2);
cout << "How much is " << num1 << " times " << num2 << "? ";
cin >> ans;
if(ans == num1 * num2) {
switch(rand() % 4 + 1) {
case 1:
cout << "Very good!" << endl;
break;
case 2:
cout << "Excellent!" << endl;
break;
case 3:
cout << "Nice work!" << endl;
break;
case 4:
cout << "Keep up the good work!" << endl;
break;
}
correct++;
isCorrect = 1;
} else {
// Incorrect answer
switch(rand() % 4 + 1) {
case 1:
cout << "No. Please try again." << endl;
break;
case 2:
cout << "Wrong. Try once more." << endl;
break;
case 3:
cout << "Don't give up!" << endl;
break;
case 4:
cout << "No. Keep trying." << endl;
break;
}
incorrect++;
isCorrect = 0;
}
if(isCorrect==1) {
generateQuestion(difficulty, num1, num2);
} else {
while(ans != num1 * num2) {
cout << "How much is " << num1 << " times " << num2 << "? ";
cin >> ans;
incorrect++;
}
cout << "Very good!" << endl;
correct++;
}
if(correct + incorrect == 10) {
double percent = (double)correct / (correct + incorrect) * 100;
if(percent < 75) {
cout << "Please ask your teacher for extra help." << endl;
} else {
cout << "Congratulations, you are ready to go to the next level!" << endl;
difficulty++;
}
correct = 0;
incorrect = 0;
}
}
return 0;
}