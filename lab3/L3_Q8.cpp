/*************************************************************
//This program is developed by SHASHANK KUMAR SINHA (221B345)
*************************************************************/
#include <iostream>
#include <string>
using namespace std;

class Movie {
    private:
        string title;
        int year;
        string Dname;
    public:
        void setTitle(string);
        void setYear(int);
        void setDirector(string);
        void Infodisplay();
};

void Movie::setTitle(string Title) {
    title = Title;
}

void Movie::setYear(int Year) {
    year = Year;
}

void Movie::setDirector(string DName) {
    Dname = DName;
}

void Movie::Infodisplay() {
    cout << "Movie Name: " << title << '\n';
    cout << "Movie Year: " << year << '\n';
    cout << "Movie Director's name: " << Dname << '\n';
}

int main() {
    Movie myFavoriteMovie;

    myFavoriteMovie.setTitle("heist");
    myFavoriteMovie.setYear(2017);
    myFavoriteMovie.setDirector("Alex");

    myFavoriteMovie.Infodisplay();

    return 0;
}
