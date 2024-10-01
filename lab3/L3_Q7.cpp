/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include<iostream>
using namespace std;
class Shirt
{int collarsize,sleeveLength;
    public:
            
            void getdata();
            void displayClothingFacts(Shirt&);
};
class Pants
{ int waistSize,inSeam;
    public:
           
            void putdata();
            void displayClothingFacts(Pants&);
};
void Shirt::getdata()
{
     cout<<"Enter the Collar Size of the Shirt: ";
     cin>>collarsize;
     cout<<"Enter the Sleeve Length of the Shirt: ";
     cin>>sleeveLength;
}
void Shirt::displayClothingFacts(Shirt &ob)
{
    cout<<"Collar Size of the Shirt is "<<collarsize<<"\n";
    cout<<"Sleeve Length of the Shirt is "<<sleeveLength<<"\n";
   
}
void Pants::putdata()
{
     cout<<"Enter the Waist Size of the Pants: ";
     cin>>waistSize;
     cout<<"Enter the In Seam of the Pants: ";
     cin>>inSeam;
}
void Pants::displayClothingFacts(Pants &ob1)
{
    cout<<"Waist Size of the Pants is "<<waistSize<<"\n";
    cout<<"In Seam of the Pants is "<<inSeam<<"\n";
}
int main()
{
    Shirt ob;
    Pants ob1;
    ob.getdata();
    
	ob1.putdata();
    ob.displayClothingFacts(ob);
    ob1.displayClothingFacts(ob1);
	return 0;
}