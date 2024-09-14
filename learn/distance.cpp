#include <iostream>
#include <cmath>

using namespace std;

struct point{
   
    int x;
    int y;
    };

int Dis( point P1 , point P2 ){
    int Distance = sqrt((pow((P2.x - P1.x) , 2 )) + (pow((P2.y - P1.y) , 2 )));
    return Distance;
}

int main(){
     
 struct point P1 , P2;
 cout<<"Enter first Coordinate: ";
 cin>>P1.x >> P1.y;
 cout<<"Enter Second Coordinate: ";
 cin>>P2.x >> P2.y;

 cout << "Distance: " << Dis(P1 ,P2);

 return 0;
}