#include<iostream>
using namespace std;
class landline{
    protected:
    string name;
    int cus_number;
    public:
    void call(int number) {
        cout << "Calling subscriber " << number << endl;
    }
    void receive() {
        cout << "Receiving call" << endl;
    }
};
class mobile:public landline{
    protected:
    int index=0;
    string phonebook[100][2];
    int last_dialed[20];
    int count = 0;
    void updateLastDialed(int number) {
        if (count == 20) {
            for (int i = 19; i < 0; i--) {
                last_dialed[i] = last_dialed[i-1];
            }
            last_dialed[0] = number;
        } else {
            last_dialed[count] = number;
            count++;
        }
    }
public:
    void addcontact() {
        cout<<"Enter name of contact :";
        cin.ignore();
        getline(cin,name);
        cout<<"Enter the number :";
        cin>>cus_number;
        cin.ignore();
        phonebook[index][0] = name;
        phonebook[index][1] = to_string(cus_number);
        index++;
    }
    void call(int number) {
        landline::call(number);
        updateLastDialed(number);
    }
    void call(string sub_name) {
      int sub_number = searchphonebook(sub_name);
        if (sub_number != -1) {
            call(sub_number);
        } else {
            cout << "Could not find contact " << sub_name << endl;
        }
    }
    void displaylastdialed() {
        cout << "Last dialed numbers: ";
        for (int i = 0; i < count; i++) {
            cout << last_dialed[i] << '\n';
        }
    }
    void calllastdialed(int index) {
        if (index < 0 || index >= count) {
            cout << "Invalid index " << endl;
        } else {
            call(last_dialed[index]);
        }
    }
int searchphonebook(string sub_name) {
         for (int i = 0; i < index; i++) {
            if (phonebook[i][0] == sub_name) {
                return stoi(phonebook[i][1]);
            }
        }
        return -1;
    }
};
int main()
{   string s;
    int n,num,i;
     cout<<"Enter the no. of contact you want to add :";
     cin>>n;
     cin.ignore();
     mobile mob;
     for(i=0;i<n;i++)
     mob.addcontact();
     come:
     cout<<"Enter the no. to call (enter 1 to exit):";
     cin>>num;
     cin.ignore(); 
     if(num== 1)
     return 0;
     mob.call(num);
     cout<<"Enter the name to call :";
     getline(cin,s);
     mob.call(s);
     cout<<"Displaying call details :"<<'\n';
     mob.displaylastdialed();
     cout<<"Enter index to call (index start with 0):";
     cin>>n;
     mob.calllastdialed(n);
     goto come;
     
}